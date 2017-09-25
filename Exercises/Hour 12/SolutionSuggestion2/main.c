/* Rewrite the program in Exercise 1, but this time use a for loop to initialise the character array with 'a', 'b', 'c', 'd', and 'e', and then print out the value of each element in the array.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array_ch[5];
    int i;

    for (i = 0; i < 5; i++)
    {   // Looping through the array, adding one character at a time a+0, a+1, a+2, etc.
       array_ch[i] = 'a' + i;
    }


    for (i = 0; i < 5; i++)
    {   // Looping through the array, printing the current element
        putchar(array_ch[i]);
    }
    return 0;
}
