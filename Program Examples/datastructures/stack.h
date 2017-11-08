#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

// Definition to determine the datatype of the stack elements
#define MYSTACK_TYPE int

// Type for each element of a stack
typedef struct _element
{
    MYSTACK_TYPE data;
    struct _element *next;
} element;

// Type for the stack it self
typedef struct
{
    element *top;
    int num_elements;
} myStack;

// Prototypes for the functions that manipulates the stack
void myStackInit(myStack *s);
void myStackPush(myStack *s, MYSTACK_TYPE data);
MYSTACK_TYPE myStackPop(myStack *s);

#endif // STACK_H_INCLUDED
