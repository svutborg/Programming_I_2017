#include <stdlib.h>
#include "stack.h"


// Stack init ensures that, given a reference to a stack variable, that the top pointer is initialised to the NULL pointer
// This indicates that the stack is empty
void myStackInit(myStack *s)
{
    s->top = NULL;
    s->num_elements = 0;
}

// stack push adds an element to the stack, given by the reference s
// This allocates and populates a new element for the stack and updates the stack's top pointer to the new element
void myStackPush(myStack *s, MYSTACKTYPE data)
{
    element *e = malloc(sizeof(element));
    if(e != NULL)
    {
        e->next = s->top;
        e->data = data;
        s->top = e;
        s->num_elements++;
    }
}

// stack pop removes the top element from the given stack by temporarely storing the element reference and data of the top element
// and updating the top pointer to the element pointed to by this element
// subsequently frees the element to be popped and returns the data
MYSTACKTYPE myStackPop(myStack *s)
{
    if(s->top != NULL)
    {
        element *e = s->top;
        MYSTACKTYPE data = e->data;
        s->top = s->top->next;
        free(e);
        s->num_elements--;
        return data;
    }
    else
    {
        return NULL;
    }
}
