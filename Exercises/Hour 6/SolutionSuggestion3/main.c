/* Write a program that initialises the integer variable x with 1 and outputs results with the following two statements:
    printf(“x++ produces: %d\n”, x++);
    printf(“Now x contains: %d\n”, x);
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1;
    printf("x++ produces: %d\n", x++);
    printf("Now x contains: %d\n", x);

    return 0;
}
