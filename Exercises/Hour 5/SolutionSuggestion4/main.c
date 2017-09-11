/*  Write a program that uses getchar() and putchar() to read in a character entered by the user and write the character to the screen.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // getchar() returns the char entered by the user and stores it in the variable c
    // c is then printed using putchar()
    // The printf() statements are just for program usability
    char c;
    printf("Please enter a character:\n");
    c = getchar();
    printf("You entered: ");
    putchar(c);

    return 0;
}
