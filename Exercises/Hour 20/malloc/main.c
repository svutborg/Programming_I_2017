#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char * str = malloc(20*sizeof(char));


    free(str);
    return 0;
}
