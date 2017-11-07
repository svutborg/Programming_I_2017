#include <stdio.h>
#include <stdlib.h>
#include "myMath.h"

int main()
{

    printf("%lf\n", power_of(10.0,-3));
    printf("%lf\n", power_of(10.0,-2));
    printf("%lf\n", power_of(10.0,-1));
    printf("%lf\n", power_of(10.0,0));
    printf("%lf\n", power_of(10,1));
    printf("%lf\n", power_of(10,2));
    printf("%lf\n", power_of(10,3));

    printf("|%lf| = %lf\n",
        -18.0,
        absolute(-18.0));
    printf("|%lf| = %lf\n", -4.7,
        absolute(-4.7));
    printf("|%lf| = %lf\n", 0.0, absolute(0.0));
    printf("|%lf| = %lf\n", 17.0, absolute(17.0));


    return 0;
}
