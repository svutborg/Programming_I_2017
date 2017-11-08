#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    // Initialising the stack
    myStack s;
    myStackInit(&s);

    int i, j;

    for(i = 0; i < 2000000; i++)
    {
        myStackPush(&s, i);
    }

    for(i = 0; i < 2000000; i++)
    {
        j = myStackPop(&s);
        if(j%75000 == 0)
        {
            printf("%d\n", j);
        }
    }

    return 0;
}
