/* Write a program to read characters from the standard I/O. If the characters are A, B, and C, display their numeric values on the screen. (The switch statement is required.)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter a key...\n press q to exit the program.\n");

    while(1)
    { // This is an infinite loop
        c = getchar();
        switch(c)
        {
            case 'A': // if the character entered is either A, B or C, print out the entered character and its numeric value
            case 'B':
            case 'C':
                printf("%c has the numeric value %d\n", c, c);
                break;
            case 'q': // if either q or Q is entered shut down the program
            case 'Q':
                printf("%c was entered. Program is exiting\n", c);
                exit(0);
            default: // for all other entries do nothing
                break;
        }
    }

    return 0;
}
