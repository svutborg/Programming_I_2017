#include <stdio.h>
#include <stdlib.h>

unsigned int factorial(unsigned int x);

int main()
{
    int n = 5;
    printf("!%d=%d",n,factorial(n));
    return 0;
}

unsigned int factorial(unsigned int x)
{
    if(x < 2)
    {
        return 1;
    }
    return x * factorial(x-1);
}
