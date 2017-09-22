/* Write a program to multiply two signed int variables with positive values, and display the result as a long int.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int i, j;

    printf("Enter two positive numbers:\n");
    scanf("%d %d", &i, &j);
    printf("%ld", (long int)(i * j));

    return 0;
}
