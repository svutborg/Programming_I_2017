/*  Given a character array in the following statement,
    char str1[] = "This is Exercise 1.";
    write a program to copy the string from str1 to another array, called str2.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = "This is Exercise 1.";
    char str2[sizeof(str1)]; // making sure that the allocated size is sufficient to hold the copied data

    strcpy(str2, str1); // Using string copy function strcpy() (included in string.h)

    printf("%s", str2); // Printing the result to verify

    return 0;
}
