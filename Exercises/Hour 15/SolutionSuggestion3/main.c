/* Rewrite the program in Listing 15.3. This time, make a function that takes a variable number of int arguments and performs the operation of multiplication on these arguments.
*/

/* 15L03.c: Processing variable arguments */
#include <stdio.h>
#include <stdarg.h>

int MultIntegers(int x, ...);

int main()
{
	int i1 = 1;
	int i2 = 2;
	int i3 = 3;
	int i4 = 4;

	printf("Given an argument: %2d\n", i1);
	printf("The result returned by MultIntegers() is: %2d\n\n", MultIntegers(1, i1));
	printf("Given arguments: %2d and %2d\n", i1, i2);
	printf("The result returned by MultIntegers() is: %2d\n\n", MultIntegers(2, i1, i2));
	printf("Given arguments: %2d, %2d and %2d\n", i1, i2, i3);
	printf("The result returned by MultIntegers() is: %2d\n\n", MultIntegers(3, i1, i2, i3));
	printf("Given arguments: %2d, %2d, %2d, and %2d\n", i1, i2, i3, i4);
	printf("The result returned by MultIntegers() is: %2d\n", MultIntegers(4, i1, i2, i3, i4));
	return 0;
}
/* definition of MultIntegers */
int MultIntegers(int x, ...)
{
	va_list arglist;
	int i;
	int result = 1;

	printf("The number of arguments is: %d\n", x);
	va_start (arglist, x);
	for (i=0; i<x; i++)
		result *= va_arg(arglist, int);
	va_end (arglist);
	return result;
}
