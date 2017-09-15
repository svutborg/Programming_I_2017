/* Given x = 1 and y = 3, write a program to print out the results of these expressions:x += y, x += -y, x -= y, x -= -y, x *= y, and x *= -y. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    x = 1;
    y = 3;
    x += y;
    printf("Performing %-7s yields: x = %2d and y = %2d\n", "x += y", x, y);

    x = 1;
    y = 3;
    x += -y;
    printf("Performing %-7s yields: x = %2d and y = %2d\n", "x += -y", x, y);

    x = 1;
    y = 3;
    x -= y;
    printf("Performing %-7s yields: x = %2d and y = %2d\n", "x -= y", x, y);

    x = 1;
    y = 3;
    x -= -y;
    printf("Performing %-7s yields: x = %2d and y = %2d\n", "x -= -y", x, y);

    x = 1;
    y = 3;
    x *= y;
    printf("Performing %-7s yields: x = %2d and y = %2d\n", "x *= y", x, y);

    x = 1;
    y = 3;
    x *= -y;
    printf("Performing %-7s yields: x = %2d and y = %2d\n", "x *= -y", x, y);

    return 0;
}
