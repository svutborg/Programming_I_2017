/* Rewrite the program in Listing 13.4. This time, convert all uppercase characters to their lowercase counterparts.
*/
/* 13L04.c: Using gets() and puts() */
#include <stdio.h>

int main()
{
    char str[80];
    int i, delt = 'a' - 'A';

    printf("Enter a string less than 80 characters:\n");
    gets( str );
    i = 0;
    while (str[i])
    {
        if ((str[i] >= 'A') && (str[i] <= 'Z')) // Changed 'a' to 'A' and 'z' to 'Z'
        {
            str[i] += delt; /* convert to lower case */ // Changed -= to +=
        }
        ++i;
    }
    printf("The entered string is (in lowercase):\n"); // Changed uppercase to lowercase
    puts( str );
    return 0;
}
