#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_this(char *str);
void another_function();
int int_product(int k, int N, ...);

int main()
{
    print_this("Her er noget tekst!\n");

    int p, x = 2;

    p = int_product(10, 4, 5, 18, x, x);
    printf("Multiplication of 5, 18, %d is %d", x, p);
    return 0;
}

void another_function()
{
    printf("This is another function");
}

void print_this(char *str)
{
    another_function();
    puts(str);
}

int int_product(int k, int N, ...)
{
    va_list argumenter;
    int i, product = k;

    va_start(argumenter, N);

    for(i = 0; i < N; i++)
    {
        product *= va_arg(argumenter, int);
    }

    va_end(argumenter);

    return product;
}
