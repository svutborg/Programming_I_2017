#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c, *ptr_c;

    ptr_c = &c;

    while(1)
    {
        *ptr_c = getchar();
        printf("The address of c is: %p, and its value is: %d\n", &c, c);
        printf("The address of ptr_c is: %p, and its value is: %p\n", &ptr_c, ptr_c);
    }

    return 0;
}
