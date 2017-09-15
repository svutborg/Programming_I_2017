/* Rewrite the program shown in Listing 7.2 by replacing the do-while loop with a for loop.
*/
/* 07L02.c: Using a do-while loop */
#include <stdio.h>

int main()
{
    int i;

    for(i = 65; i < 72; i++)
    {
        printf("The numeric value of %c is %d.\n", i, i);
    }

    /*
    i = 65;
    do {
        printf("The numeric value of %c is %d.\n", i, i);
        i++;
    } while (i<72);
    */
    return 0;
}
