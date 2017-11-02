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
//TODO: define an enumerated type called card_suit with the four suits as members
//TODO: define an enumerated type called card_value with the values of each of the 13 cards (include two values for the ace)
//TODO: define an enumerated type called bool with the members true and false

//TODO: define a structure type called card, with two members suit and value
//TODO: define a structure type called deck, with an array of cards and an int member for the number of cards remaining in the deck
//TODO: define a structure type called hand, with an array of cards and three ints, the number of cards in the hand, the low sum(sum of the cards values counting the low values of aces) and the high sum
//TODO: define a structure type called player, with a hand member, an int for the cash the player has left, and an int for the current bet
//TODO: define a structure type called game, with two player members, one called dealer, and one called play and one deck


/*
    Global constant declarations go here
*/
//TODO: add a constant character array with the string representations of the suits
//TODO: add a constant character array with the string representations of the card values

/*
    Global variables go here
*/
char screen_buffer[WINDOW_HEIGHT][WINDOW_WIDTH+1];
//TODO: add variables as needed

/*
    Function prototypes go here
*/
//TODO: add function prototypes for your functions

/*
    Function definitions go here
*/
/// Game functions
//TODO: define a function that will initialise a deck
//TODO: define a function that will shuffle a deck
//TODO: define a function that will deal a card (remove one from the deck, and add to a given hand)
//TODO: define a function that initialises the data of a player
//TODO: define a function that will initialise a game
//TODO: define a function that will clear a hand
//TODO: define a function that will update the game if a player looses
//TODO: define a function that will update the game if a player wins

/// "Graphics" functions
//TODO: define a function that will clear the console and print the screen_buffer
//TODO: define a function that will initialise the screen buffer
//TODO: define a function that will return a card as a string (e.g. two of diamonds)
//TODO: define a function that will insert a string into another
//TODO: define a function that will clear a given area of the screen_buffer
//TODO: define a function that will update the contents of the screen buffer (e.g. if a player has gained a new card)


int main()
{
    /* Declare variables */
    // TODO: declare needed local variables

    /* Game functionality implementation */
    // TODO: Call the functions needed to initialise the gameplay
    while(1)
    {   /* Repeated gameplay */
        // TODO: implement repeated part of the gameplay
    }
    return 0;
}
