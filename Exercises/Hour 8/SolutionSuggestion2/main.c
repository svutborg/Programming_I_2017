/* Taking the values of x and y assigned in Exercise 1, write a program that prints out the values of !x and !y by using both the %d and %u formats in the printf() function.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0xEFFFFFFF;
    int y = 0x10000000;

    printf("!0xEFFFFFFF\n%%d\t%d\n%%u\t%u\n", x, x);
    printf("!0x10000000\n%%d\t%d\n%%u\t%u", y, y);

    return 0;
}
