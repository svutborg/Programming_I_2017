/* Given that x=5 and y=6, write a program to calculate the multiplication of the two integers and print out the result, which is saved in x, all in the way of indirection (that is, using pointers).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5, y = 6;

    int *xp, *yp;
    xp = &x;
    yp = &y;

    *xp = *xp * *yp; // (whatever xp is pointed at) = (whatever xp is pointed at) * (whatever yp is pointed at)

    printf("%d", *xp);
    return 0;
}
