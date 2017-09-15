#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    x = 13;
    y = 4;

    x += y;
    printf("x += y: %d\n", x);

    x *= 2;
    printf("x *= 2: %d\n", x);

    x %= y;
    printf("x %%= y: %d\n", x);


    x = 13;
    y = 4;

    x = x + y;
    printf("x = x + y: %d\n", x);

    x = x * 2;
    printf("x = x * 2: %d\n", x);

    x = x % y;
    printf("x = x %% y: %d\n\n", x);


    x = 0;
    printf("x: %d\n", x);
    x++;
    printf("x: %d\n", x++);
    printf("x: %d\n", x--);

    return 0;
}
