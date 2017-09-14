#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float result;

    a = 65;
    b = 17;

    result = a/(float)b;

    printf("%d / %d = %f", a, b, result);
    return 0;
}
