#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    /*
    // For loop
    for (number = 0; number <= 20; number++)
    {
        printf("%d\t%X\t%o\n", number, number, number);
    }
    */
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Iteration %d of the outer loop\n", i);
        for (j = 5; j > 0; j--)
        {
            printf("\tIteration %d of the inner loop\n", j);
        }
    }

/*
    // while loop
    number = 0;
    while(number <= 20)
    {
        printf("%d\t%X\t%o\n", number, number, number);
        number++;
    }*/
    /*
    // do while loop
    number = 0;
    do
    {
        printf("%d\t%X\t%o\n", number, number, number);
        number++;
    } while (number <= 20);
    */
    return 0;
}
