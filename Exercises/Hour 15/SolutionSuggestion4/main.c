/*  Rewrite the program in Listing 15.3 again.
    This time, print out all arguments passed to the AddDouble() function.
    Does va_arg() fetch each argument in the same order (that is, from left to right) of the argument list passed to AddDouble()?
*/
/* 15L03.c: Processing variable arguments */
#include <stdio.h>
#include <stdarg.h>

double AddDouble(int x, ...);

int main()
{
	double d1 = 1.5;
	double d2 = 2.5;
	double d3 = 3.5;
	double d4 = 4.5;

	printf("Given an argument: %2.1f\n", d1);
	printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(1, d1));
	printf("Given arguments: %2.1f and %2.1f\n", d1, d2);
	printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(2, d1, d2));
	printf("Given arguments: %2.1f, %2.1f and %2.1f\n", d1, d2, d3);
	printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(3, d1, d2, d3));
	printf("Given arguments: %2.1f, %2.1f, %2.1f, and %2.1f\n", d1, d2, d3, d4);
	printf("The result returned by AddDouble() is: %2.1f\n", AddDouble(4, d1, d2, d3, d4));
	return 0;
}
/* definition of AddDouble() */
double AddDouble(int x, ...)
{
	va_list arglist;
	int i;
	double result = 0.0, temp;

	printf("The number of arguments is: %d\n", x);
	va_start (arglist, x);
	printf("List order: ");
	for (i=0; i<x; i++)
    {
        temp = va_arg(arglist, double); // Storing the current number in a temporary variable
        printf("%2.1f ",temp);
        result += temp;
    }
    putchar('\n');
	va_end (arglist);
	return result;
}

// Yes the order is the same as the order of the passed arguments
