/* Given x = 0xEFFFFFFF and y = 0x10000000 (that is, EFFFFFFF and 10000000 as hex values), what hex values do you get by evaluating ~x and ~y?
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0xEFFFFFFF;
    int y = 0x10000000;

    printf("~0xEFFFFFFF = 0x%X\n~0x10000000 = 0x%X\n", ~x, ~y);
    printf("notice that they are each others compliment");

    return 0;
}
