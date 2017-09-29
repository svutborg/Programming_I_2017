/*  Write a program to measure the length of a string by evaluating the elements in a character array one by one until you reach the null character.
    To prove you get the right result, you can use the strlen() function to measure the same string again.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char test_string[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    int index = 0;

    while(test_string[index++]); // The only thing this loop does is count up index, if it has not yet encountered the null character '\0', which terminates a string

    printf("The size of the test string is %d bytes by count, and %d bytes by using sizeof() function.", index*sizeof(char), sizeof(test_string));

    return 0;
}
