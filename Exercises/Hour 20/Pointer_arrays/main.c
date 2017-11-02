#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *str[3] = {"One string", "Another string", "Yet another string"};

    printf("The address contained by the str variable is: %p\n", str);
    printf("%p: %X\n", str, *str);
    printf("%p: %X\n", str+1, *(str+1));
    printf("%p: %X\n\n", str+2, *(str+2));

    printf("%p: %s", str, str[0]);
    printf("%p: %s", str+1, str[1]);
    printf("%p: %s", str+2, str[2]);


    return 0;
}
