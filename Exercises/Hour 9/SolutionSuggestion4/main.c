/* Write a program to display negative integers in hex format along with their signed int equivalents.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    num = -5324;

    printf("%d equals 0x%x in hexadecimal format", num, num);
    return 0;
}
