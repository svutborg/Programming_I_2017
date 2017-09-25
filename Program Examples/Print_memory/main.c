#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char *c = &a;


    while(1)
    {
        printf("| %p | %8d |\n", c, *c);
        c++;
    }

    return 0;
}
