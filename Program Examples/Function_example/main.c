#include <stdio.h>

int print_number(int num)
{
    int i;
    i = printf("Tallet var: %d\n", num);
    return i;
}

int main()
{

    printf("Du printede %d tejn", print_number(11));
    return 0;
}
