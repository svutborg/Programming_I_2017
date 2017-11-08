#ifndef DYNARRAY_H_INCLUDED
#define DYNARRAY_H_INCLUDED

#define MYDYNARRAY_TYPE int
#define MYDYNARRAY_GROWTH_RATE 1.5

typedef enum {failure, success} status;

typedef struct
{
    int elements;
    int max;
    MYDYNARRAY_TYPE *data;
} myDynarray;

status myDynarrayInit(myDynarray *a, int number);
status myDynarrayAdd(myDynarray *a, int data);
void myDynarraySet(myDynarray *a, MYDYNARRAY_TYPE data, int index);
MYDYNARRAY_TYPE myDynarrayGet(myDynarray *a, int index);
void myDynarrayDispose(myDynarray *a);
void *myDynarrayIncreaseSize(myDynarray *a);

#endif // DYNARRAY_H_INCLUDED
