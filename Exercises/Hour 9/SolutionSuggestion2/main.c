/* Write a program to measure the sizes of short int, long int, and long double on your machine.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The size of short int   is %d bytes\n", sizeof(short int));
    printf("The size of long int    is %d bytes\n", sizeof(long int));
    printf("The size of long double is %d bytes\n", sizeof(long double));

    return 0;
}
