#include <stdlib.h>
#include "dynarray.h"


status myDynarrayInit(myDynarray *a, int number)
{
    a->data = malloc(number*sizeof(MYDYNARRAY_TYPE));
    a->elements = 0;
    a->max = number;
    return a->data == NULL ? failure : success;
}

status myDynarrayAdd(myDynarray *a, int data)
{
    if(a->elements == a->max)
    {
        if(myDynarrayIncreaseSize(a) == NULL)
        {
            return failure;
        }
    }
    a->data[a->elements] = data;
    a->elements++;
    return success;
}

void myDynarraySet(myDynarray *a, MYDYNARRAY_TYPE data, int index)
{
    if(index < a->max)
    {
        a->data[index] = data;
        if (index > a->elements - 1)
            a->elements = index+1;
    }
}

MYDYNARRAY_TYPE myDynarrayGet(myDynarray *a, int index)
{
    if(index < a->elements)
    {
        return a->data[index];
    }
    return (MYDYNARRAY_TYPE)failure;
}

void myDynarrayDispose(myDynarray *a)
{
    free(a->data);
}

void *myDynarrayIncreaseSize(myDynarray *a)
{
    int i;
    int new_max = a->max*MYDYNARRAY_GROWTH_RATE;
    //printf("Increasing size: %d -> %d\n", a->max, new_max);
    MYDYNARRAY_TYPE *new_array = malloc(new_max*sizeof(MYDYNARRAY_TYPE));
    if(new_array != NULL)
    {
        for (i = 0; i < a->elements; i++)
        {
            new_array[i] = a->data[i];
        }
        free(a->data);
        a->data = new_array;
        a->max = new_max;
    }
    return new_array;
}
