#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

/*
    Defines go here
*/
#define CARDS_IN_A_DECK 52
#define CARDS_IN_A_HAND 5
#define SUIT_COUNT 4
#define NUMBER_OF_PLAYERS 1
#define ROWS CARDS_IN_A_HAND
#define WINDOW_WIDTH 100
#define SPLIT_WIDTH 15
#define WINDOW_HEIGHT 2*(ROWS+1)+2
#define STARTING_CASH 1000
#define MINIMUM_BET 10
#define DEALER_STAND_VALUE 17
#define BLACKJACK 21

/*
    Typedefinitions go here
*/
typedef enum {hearts, diamonds, clubs, spades} card_suit;
typedef enum {lowAce = 1, two, three, four, five, six, seven, eight, nine, ten, jack = ten, queen = ten, king = ten, highAce} card_value;
typedef enum {false, true} bool;

typedef struct
{
    card_suit suit;
    card_value value;
} card;

typedef struct
{
    card cards[CARDS_IN_A_DECK];
    int num_cards;
} deck;

typedef struct
{
    card cards[CARDS_IN_A_HAND];
    int low_sum;
    int high_sum;
    int num_cards;
} hand;

typedef struct
{
    hand h;
    int cash;
    int bet;
} player;

typedef struct
{
    player dealer;
    player players[NUMBER_OF_PLAYERS];
} game;

/*
    Constant declatations go here
*/
const char *suit_names[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
const char *value_names[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

/*
    Global variables go here
*/
char screenBuffer[WINDOW_HEIGHT][WINDOW_WIDTH+1];

/*
    Function prototypes go here
*/
void populate_deck(deck *d);
void shuffle_deck(deck *d);
int bounded_random(int lower_bound, int upper_bound);
void print_card(card *c);
void print_hand(hand *h);
void print_deck(deck *d);
void update_screen_buffer(game *g);

/*
    Function definitions go here
*/
void populate_deck(deck *d)
{
    int i;
    for (i = 0; i < CARDS_IN_A_DECK; i++)
    {
        d->cards[i].suit = (card_suit)(i/(CARDS_IN_A_DECK/SUIT_COUNT));
        d->cards[i].value = (card_value)(i%(CARDS_IN_A_DECK/SUIT_COUNT));
    }
    d->num_cards = CARDS_IN_A_DECK;
}

void shuffle_deck(deck *d)
{
    int i, j, upper_bound = d->num_cards;
    card temp_card;
    for(i = 0; i < upper_bound; i++)
    {
        j = bounded_random(i, upper_bound-1);
        temp_card = d->cards[i];
        d->cards[i] = d->cards[j];
        d->cards[j] = temp_card;
    }
}

int bounded_random(int lower_bound, int upper_bound)
{
    return (rand()*(upper_bound-lower_bound))/RAND_MAX+lower_bound;
}

void deal_card(deck *d, player *p, game *g)
{
    hand *h = &p->h;
    int hval = 0, lval = 0;
    h->cards[h->num_cards++] = d->cards[d->num_cards-- -1];
    lval = h->cards[h->num_cards-1].value;
    if(lval == lowAce)
    {
        hval = highAce;
    }
    else
    {
        hval = lval;
    }
    h->high_sum += hval;
    h->low_sum += lval;
    update_screen_buffer(g);
}

void print_card(card* c)
{
    printf("\t%s of %s\n", value_names[c->value], suit_names[c->suit]);
}

void new_player(player* p, int cash)
{
    p->cash = cash;
    p->bet = 0;
    p->h.num_cards = 0;
    p->h.low_sum = 0;
    p->h.high_sum = 0;
}

void print_frame()
{
    int i;
    system("@cls||clear");
    for(i = 0; i < WINDOW_HEIGHT; i++)
    {
        printf("%s\n",screenBuffer[i]);
    }
}

void initialise_screen_buffer()
{
    int i;

    for(i = 0; i < WINDOW_HEIGHT-1; i++)
    {
        if( (i == 0) || (i == ROWS+1) || (i == 2*(ROWS+1)))
        {
            memset(screenBuffer[i], '-', WINDOW_WIDTH);

            screenBuffer[i][0] = '|';
            screenBuffer[i][SPLIT_WIDTH] = '|';
            screenBuffer[i][WINDOW_WIDTH-1] = '|';

            screenBuffer[i][WINDOW_WIDTH] = '\0';

            screenBuffer[i][0] = '+';
            screenBuffer[i][SPLIT_WIDTH] = '+';
            screenBuffer[i][WINDOW_WIDTH-1] = '+';
        }
        else
        {
            memset(screenBuffer[i], ' ', WINDOW_WIDTH);

            screenBuffer[i][0] = '|';
            screenBuffer[i][SPLIT_WIDTH] = '|';
            screenBuffer[i][WINDOW_WIDTH-1] = '|';

            screenBuffer[i][WINDOW_WIDTH] = '\0';
        }
    }
    sprintf(screenBuffer[i], "| S: Stand | H: Hit |");
}

void initialise_game(game *g, deck *d)
{
    int i;
    /* Initialise deck */
    populate_deck(d);
    shuffle_deck(d);

    /* Initialise players */
    new_player(&g->dealer, 0);
    for (i = 0; i < NUMBER_OF_PLAYERS; i++)
    {
        new_player(&g->players[i], STARTING_CASH);
    }
}

char *card_to_string(card *c, char *res)
{
    sprintf(res, "%s of %s", value_names[c->value], suit_names[c->suit]);
    return res;
}

void insert_string(char *destination, char *ins)
{
    int i = 0;
    while(ins[i])
    {
        *(destination+i) = ins[i];
        i++;
    }
}

void clear_buffer_space(char *start, int number)
{
    int i;
    for(i = 0; i < number; i++)
    {
        *(start+i) = ' ';
    }
}

void update_screen_buffer(game *g)
{
    int j;
    char *buf = calloc(SPLIT_WIDTH,1);
    char *cash = calloc(SPLIT_WIDTH,1);;

    initialise_screen_buffer();
    for(j = 0; j < g->dealer.h.num_cards; j++)
    {
        card_to_string(&g->dealer.h.cards[j], buf);
        insert_string(&screenBuffer[j+1][SPLIT_WIDTH+2], buf);
    }
    for(j = 0; j < g->players[0].h.num_cards; j++)
    {
        card_to_string(&g->players[0].h.cards[j], buf);
        insert_string(&screenBuffer[j+ROWS+2][SPLIT_WIDTH+2], buf);
    }
    insert_string(&screenBuffer[1][2], "Dealer:");
    insert_string(&screenBuffer[ROWS+2][2], "Player:");
    insert_string(&screenBuffer[ROWS+3][2], "Cash:");
    cash = itoa(g->players[0].cash, cash, 10);
    clear_buffer_space(&screenBuffer[ROWS+4][4], SPLIT_WIDTH-4);
    insert_string(&screenBuffer[ROWS+4][4], cash);
    print_frame();
    Sleep(200);
}

void clear_hand(player *p)
{
    new_player(p, p->cash);
}

void loose(player *p)
{
    p->bet = 0;
}

void win(player *p)
{
    p->cash += 2*p->bet;
    p->bet = 0;
}

int main()
{
    /* Declare variables */
    int bet, dealer_best, player_best;
    bool over = true;;
    char input;
    deck d;
    game g;
    srand(time(NULL));

    initialise_screen_buffer();
    initialise_game(&g, &d);
    update_screen_buffer(&g);

    Sleep(500);
    while(1)
    {   // gameplay
        clear_hand(&g.dealer);
        clear_hand(&g.players[0]);
        over = false;
        update_screen_buffer(&g);
        printf("Make your bet:");
        scanf("%d", &bet);
        if(bet > g.players[0].cash)
        {
            printf("You cannot bet more than you have in cash. Make another bet.");
            getchar();
        }
        else
        {
            if(bet < MINIMUM_BET)
            {
                printf("You cannot bet less than the minimum bet of %d. Make another bet.", MINIMUM_BET);
                getchar();
            }
            else
            {
                fflush(stdin);
                g.players[0].bet = bet;
                g.players[0].cash -= bet;
                deal_card(&d, &g.dealer, &g);
                deal_card(&d, &g.players[0], &g);
                deal_card(&d, &g.players[0], &g);
                while( (input = getchar()) != 'S')
                {
                    fflush(stdin);
                    deal_card(&d, &g.players[0], &g);
                    if(g.players[0].h.low_sum > BLACKJACK)
                    {
                        printf("You loose!");
                        loose(&g.players[0]);
                        getchar();
                        over = true;
                        break;
                    }
                    else if( (g.players[0].h.low_sum == BLACKJACK) || (g.players[0].h.high_sum == BLACKJACK) || (g.players[0].h.num_cards >= CARDS_IN_A_HAND))
                    {
                        printf("You win!");
                        win(&g.players[0]);
                        getchar();
                        over = true;
                        break;
                    }
                }

                while( (g.dealer.h.low_sum < DEALER_STAND_VALUE) && (!over) )
                {
                    if((g.dealer.h.low_sum > DEALER_STAND_VALUE) && (g.dealer.h.low_sum < BLACKJACK))
                    {
                        break;
                    }
                    deal_card(&d, &g.dealer, &g);
                    if(g.dealer.h.low_sum > BLACKJACK)
                    {
                        printf("House looses!");
                        win(&g.players[0]);
                        getchar();
                        over = true;
                        break;
                    }
                    else
                    if(g.dealer.h.num_cards >= CARDS_IN_A_HAND)
                    {
                        printf("You loose!");
                        loose(&g.players[0]);
                        getchar();
                        over = true;
                        break;
                    }
                }

                if(!over)
                {
                    player_best = -1;
                    if(g.players[0].h.high_sum < BLACKJACK)
                    {
                        player_best = g.players[0].h.high_sum;
                    }
                    else if (g.players[0].h.low_sum < BLACKJACK)
                    {
                        player_best = g.players[0].h.low_sum;
                    }

                    dealer_best = -1;
                    if(g.dealer.h.high_sum < BLACKJACK)
                    {
                        dealer_best = g.dealer.h.high_sum;
                    }
                    else if (g.dealer.h.low_sum < BLACKJACK)
                    {
                        dealer_best = g.dealer.h.low_sum;
                    }

                    if ( player_best > dealer_best)
                    {
                        printf("Player wins!");
                        win(&g.players[0]);
                    }
                    else
                    {
                        printf("House wins!");
                        loose(&g.players[0]);
                    }
                    fflush(stdin);
                    getchar();
                }
            }
        }
        getchar();
        fflush(stdin);
    }
    return 0;
}

void print_hand(hand *h)
{
    int i;
    for (i = 0; i < h->num_cards; i++)
    {
        print_card(&(h->cards[i]));
    }
}

void print_deck(deck *d)
{
    int i;
    for (i = 0; i < d->num_cards; i++)
    {
        print_card(&(d->cards[i]));
    }
}
