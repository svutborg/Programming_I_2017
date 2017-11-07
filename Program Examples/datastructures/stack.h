#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

// Definition to determine the datatype of the stack elements
#define MYSTACKTYPE int

// Type for each element of a stack
typedef struct _element
{
    MYSTACKTYPE data;
    struct _element *next;
} element;

// Type for the stack it self
typedef struct
{
    element *top;
} myStack;

// Prototypes for the functions that manipulates the stack
void myStackInit(myStack *s);
void myStackPush(myStack *s, MYSTACKTYPE data);
MYSTACKTYPE myStackPop(myStack *s);

#endif // STACK_H_INCLUDED
