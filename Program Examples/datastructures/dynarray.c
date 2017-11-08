#include <stdlib.h>
#include "dynarray.h"

void *myDynarrayInit(myDynarray *a, int number)
{
    a->data = malloc(number*sizeof(mydata));
    a->elements = 0;
    a->max = number;
    return a->data;
}

void myDynarrayAdd(myDynarray *a, mydata data)
{
    if(a->elements == a->max)
    {
        if(myDynarrayIncreaseSize(a) != NULL)
        {
            a->data[lements] = data;
            a->elements++;
        }
    }
}

void myDynarraySet(myDynarray *a, mydata data, int index)
{

}

mydata myDynarrayGet(myDynarray *a, int index)
{

}

void *myDynarrayDispose(myDynarray *a)
{
    free(a->data);
}

void *myDynarrayIncreaseSize(myDynarray *a)
{
    int i;
    int new_max = a->max*MYDYNARRAY_GROWTH_RATE;
    mydata new_array[] = malloc(new_max*sizeof(mydata));
    if(new_array != NULL)
    {
        for (i = 0; i < a->elements; i++)
        {
            new_array[i] = a->data[i];
        }
        a->data = new_array;
        a->max = new_max;
    }
    return new_array;
}
