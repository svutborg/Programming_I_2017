/*  Write a program to ask the user to enter his or her name. Then ask the user whether he or she is a Danish citizen.
    If the answer is Yes, ask the user to enter the region where he or she comes from. Otherwise, ask the user to enter the name of the country he or she comes from.
    (You�re required to use a union in your program.)
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct person_type
{
    char name[20];      // person's name
    char DK_citizen;    // one character to indicate whether or not the entered person is a Danish citizen or not
    union loc           // location stored in a union (region and country shares memory)
    {
        char region[20];
        char contry[20];
    } location;
} person;               // new type called person

int main()
{
    person p;   // variable on the person type

    printf("Hello, please enter your name\n");
    gets(p.name); // Get the person's name

    printf("Are you a Danish citizen (y/n)? ");
    scanf("%c", &p.DK_citizen); // Ask for Danish citizenship ('y' or 'Y') indicates yes
    fflush(stdin);  // If more than one character was entered, the remaining is discarded
    if(p.DK_citizen == 'y' || p.DK_citizen == 'Y')
    {
        printf("Please enter the region you live in\n");
        gets(p.location.region); // Get the region of the user
    }
    else
    {
        printf("Please enter the country you live in\n");
        gets(p.location.contry); // Get the country of the user
    }

    printf("Hello %s\nYou entered that you are %sa Danish citizen and that you live in %s", p.name, (p.DK_citizen=='y'||p.DK_citizen=='Y')?"":"not ", p.location.region); // Print the entered
    // (p.DK_citizen=='y'||p.DK_citizen=='Y')?"":"not " will insert "not" if the user is not a Danish citizen

    return 0;
}
