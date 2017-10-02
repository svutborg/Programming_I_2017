/* Rewrite the add_two() function in Listing 14.3 to print out the previous result of the addition, as well as the counter value.
*/
/* 14L03.c: Using the static specifier */
#include <stdio.h>
/* the add_two function */
int add_two(int x, int y)
{
	static int counter = 1;
	static int previous_result = 0;

	printf("This is the function call of %d, the previous result of the addition was %d \n", counter++, previous_result);
	previous_result = x + y;
	return (x + y);
}
/* the main function */
int main()
{
	int i, j;

	for (i=0, j=5; i<5; i++, j--)
		printf("and the addition of %d and %d is %d.\n\n", i, j, add_two(i, j));
	return 0;
}
