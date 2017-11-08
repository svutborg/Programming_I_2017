#ifndef DYNARRAY_H_INCLUDED
#define DYNARRAY_H_INCLUDED

//#define MYDYNARRAY_TYPE int
#define MYDYNARRAY_GROWTH_RATE 1.5

typedef int mydata;

typedef struct
{
    int elements;
    int max;
    mydata data[];
} myDynarray;

void *myDynarrayInit(myDynarray *a, int number);
void myDynarraySet(myDynarray *a, mydata data, int index);
mydata myDynarrayGet(myDynarray *a, int index);
void *myDynarrayDispose(myDynarray *a);
void *myDynarrayIncreaseSize(myDynarray *a);

#endif // DYNARRAY_H_INCLUDED
