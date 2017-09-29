/* Write a program that uses the scanf() function to read in two integers entered by the user, adds the two integers, and then prints out the sum on the screen.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Enter two integer numbers\n");
    scanf("%d %d", &num1, &num2);       // scanf() stores the two numbers in num1 and num2

    printf("The sum of the entered numbers is: %d", num1+num2);
    return 0;
}
