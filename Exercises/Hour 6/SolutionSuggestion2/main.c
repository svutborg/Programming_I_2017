/* Given x = 3 and y = 6, what is the value of z after the statement z = x * y == 18; is executed?
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    x = 3;
    y = 6;
    z = x * y == 18;

    printf("Given x = 3 and y = 6, the value of z after the statement z = x * y == 18; is executed is: %d", z);

    return 0;
}
