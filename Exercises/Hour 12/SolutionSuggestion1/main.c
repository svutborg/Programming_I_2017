/*  Given this character array:
        char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
    write a program to display each element of the array on the screen.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array_ch[5] = {'A', 'B', 'C', 'D', 'E'};
    int i;

    for (i = 0; i < 5; i++)
    {   // Looping through the array, printing the current element
        putchar(array_ch[i]);
    }

    return 0;
}
