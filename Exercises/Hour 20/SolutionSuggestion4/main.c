/*  Modify the program you wrote in Exercise 3. Add a bit field and use it as a flag. If the user is a danish citizen, set the bit field to 1.
    Otherwise, set the bit field to 0. Print out the user’s name and the name of country or region by checking the value of the bit field.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct person_type
{
    char name[20];      // person's name
    struct // one byte for personal flags
    {
        char DK_citizen: 1; // One bit to indicate whether or not the entered person is a Danish citizen or not;
    }user_flags;
    union loc           // location stored in a union (region and country shares memory)
    {
        char region[20];
        char contry[20];
    } location;
} person;               // new type called person

int main()
{
    char buffer[10];
    person p;   // variable on the person type

    printf("Hello, please enter your name\n");
    gets(p.name); // Get the person's name

    printf("Are you a Danish citizen (y/n)? ");
    scanf("%s", buffer); // Ask for Danish citizenship ('y' or 'Y') indicates yes
    if( (buffer[0] == 'y') || (buffer[0] == 'Y') ) // Set the citizen flag based on the first entered character
    {
        p.user_flags.DK_citizen = 1; // Is a Danish citizen
    }
    else
    {
        p.user_flags.DK_citizen = 0; // Is not a Danish citizen
    }
    fflush(stdin);  // If more than one character was entered, the remaining is discarded
    if(p.user_flags.DK_citizen)
    {
        printf("Please enter the region you live in\n");
        gets(p.location.region); // Get the region of the user
    }
    else
    {
        printf("Please enter the country you live in\n");
        gets(p.location.contry); // Get the country of the user
    }

    printf("Hello %s\nYou entered that you are %sa Danish citizen and that you live in %s", p.name, (p.user_flags.DK_citizen)?"":"not ", p.location.region); // Print the entered
    // (p.DK_citizen=='y'||p.DK_citizen=='Y')?"":"not " will insert "not" if the user is not a Danish citizen

    return 0;
}
