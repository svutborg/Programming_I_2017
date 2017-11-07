#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    // Initialising the stack
    myStack s;
    myStackInit(&s);

    // Adds(pushes) elements to the stack
    myStackPush(&s, 42);
    myStackPush(&s, 5);
    myStackPush(&s, -17);

    // Removes(pops) elements from the stack
    printf("%d", myStackPop(&s));
    printf("%d", myStackPop(&s));
    printf("%d", myStackPop(&s));

    return 0;
}
