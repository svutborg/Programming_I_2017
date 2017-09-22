/*  Given the following statements,
        short x;
        unsigned short y;
        x = 0xAB78;
        y = 0xAB78;
    write a program to display the decimal values of x and y on the screen.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    short x;
    unsigned short y;
    x = 0xAB78;
    y = 0xAB78;

    printf("The decimal values of 0xAB78 declared as a sort and 0xAB78 defined as an unsigned short is %d and %d respectively", x, y, x, y);
    return 0;
}
