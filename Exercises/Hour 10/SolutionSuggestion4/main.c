/* Write a program that keeps reading characters from the standard input until the character q is entered.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char c;
    printf("Press q to quit.\n");
    do
    {
        c = getch(); // getch is defined in conio.h (It does the same thing as getchar, except for that it does not wait for enter to be pressed)
    } while (c != 'q' && c != 'Q');
    return 0;
}
