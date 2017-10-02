#include <stdio.h>
#include <stdlib.h>
#include "new_file.c"

int i = 5;
float f;

void print_sequence()
{
    static int k = 1;
    printf("Denne funktion er kaldt : %d gange\n", k++);
}

int add_values(int a, int b)
{
    printf("%f",f);
    return a+b+i;
}

int main()
{
    int i = 8;
    {
        int i = 42;
    }
    print_sequence();
    print_sequence();
    print_sequence();
    printf("i variable in: %d\n",i);

    printf("Result of add_values: %d\n", add_values(1,18));

    printf("Hello world!\n");
    return 0;
}
