/*  Write a C program that calls the C function you just wrote in Exercise 8 to calculate the multiplication of 3 and 5
    and then print out the return value from the function on the screen.
*/
#include <stdio.h>
#include <stdlib.h>

// multiplies a and b and returns the result
int integer_multiply(int a, int b)
{
    return a * b;
}

int main()
{
    // Declares the product variable of the integer type and assigns it the result of the integer_multiply
    int product = integer_multiply(3, 5);
    // Prints the result stored in the product variable
    printf("Testing multiplication: 3 * 5 = %d", product);
    return 0;
}
