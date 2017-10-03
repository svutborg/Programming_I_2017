/* Rewrite the program in Listing 18.4. This time, add integers starting at the value of MIN_NUM instead of the value of MAX_NUM.
*/

/* 18L04.c: Calling a recursive function */
#include <stdio.h>

enum con{MIN_NUM = 0, MAX_NUM = 100};

int fRecur(int n);

int main()
{
	int i, sum1, sum2;

	sum1 = sum2 = 0;
	for (i=MAX_NUM; i>=MIN_NUM; i--) // Changed from: for (i=MIN_NUM; i<=MAX_NUM; i++)
		sum1 += i;
	printf("The value of sum1 is %d.\n", sum1);
	sum2 = fRecur(MIN_NUM); // Calling with the MIN_NUM in stead of MAX_NUM
	printf("The value returned by fRecur() is %d.\n", sum2);

	return 0;
}
/* function definition */
int fRecur(int n)
{
	if (n == MAX_NUM)
		return MAX_NUM;
	return fRecur(n + 1) + n;
}

/* old definition
int fRecur(int n)
{
	if (n == MIN_NUM)
		return 0;
	return fRecur(n - 1) + n;
}*/
