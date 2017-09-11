/*  Given three integers, 15, 150, and 1500, write a program that prints the integers on the screen in the hex format.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // There is more code than needed here, the alignment is just for presentation
    printf("Base 10 | Base 16\n");
    printf("-----------------\n");
    printf("%7d | %-7X\n", 15, 15);
    printf("%7d | %-7X\n", 150, 150);
    printf("%7d | %-7X\n", 1500, 1500);
    return 0;
}
