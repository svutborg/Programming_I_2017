/*  Write a program that prints out the numeric values of characters Z and z.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // This tells the program to print out a string with two numbers in the place of %d and by feeding it 'Z' and 'z' it will interpret those as numbers
    printf("The numeric value of characters Z and z is %d and %d respectively", 'Z', 'z');
    return 0;
}
