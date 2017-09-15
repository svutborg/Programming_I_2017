/*Rewrite the program in Listing 10.1. This time, use the logical expression i%6 == 0 in the if statement.
*/
/* 10L01.c Using the if statement */
#include <stdio.h>

int main()
{
    int i;

    printf("Integers that can be divided by both 2 and 3\n");
    printf("(within the range of 0 to 100):\n");
    for (i=0; i<=100; i++)
    {
        if (i%6 == 0)   //((i%2 == 0) && (i%3 == 0))
            printf(" %d\n", i);
    }
    return 0;
}
