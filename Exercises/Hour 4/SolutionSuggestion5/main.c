/*  Write a program that can print out the numeric value of the newline character (\n). (Hint: assign ‘\n’ to a character variable.)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // %d interprets the char constant '\n' as a number
    printf("The numeric value of the newline character (\\n) is %d", '\n');
    return 0;
}
