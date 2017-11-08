#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "dynarray.h"

#define SENARIO 2

#define TEST_NUMBER 100000000
#define PRINT_INTERVAL 10000000

int main()
{
    #if SENARIO == 1
        myStack s;
        myStackInit(&s);
    #elif SENARIO == 2
        myDynarray a;
        myDynarrayInit(&a, 10);
    #endif // SENARIO

    int i, j;

    for(i = 0; i < TEST_NUMBER; i++)
    {
        #if SENARIO == 1
            myStackPush(&s, i);
        #elif SENARIO == 2
            myDynarrayAdd(&a, i);
        #endif // SENARIO
        if(i%PRINT_INTERVAL == 0)
        {
            printf("Storing: %8d\n", i);
        }
    }

    for(i = 0; i < TEST_NUMBER; i++)
    {
        #if SENARIO == 1
            j = myStackPop(&s);
        #elif SENARIO == 2
            j = myDynarrayGet(&a, i);
        #endif // SENARIO
        if(j%PRINT_INTERVAL == 0)
        {
            printf("Retrieving: %8d\n", j);
        }
    }

    #if SENARIO == 1
        myStackDispose(&s);
    #elif SENARIO == 2
        myDynarrayDispose(&a);
    #endif // SENARIO

    return 0;
}
