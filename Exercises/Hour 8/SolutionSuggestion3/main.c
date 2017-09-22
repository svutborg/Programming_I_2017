/* Given int x = 123 and int y = 4, write a program that displays the results of the expressions x << y and x >> y.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 123;
    int y = 4;

    printf("The result of %d << %d is %d\n", x, y, x << y);
    printf("The result of %d >> %d is %d\n", x, y, x >> y);
    return 0;
}
