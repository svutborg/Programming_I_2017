#include "myMath.h"

typedef enum {false, true} boolean;

double powerOf(double base, int exponent)
{
    double result = 1;
    boolean is_negative = false;

    if (exponent < 0)
    {
        is_negative = true;
        exponent = -exponent;
    }
    while(exponent > 0)
    {
        result *= base;
        exponent--;
    }
    if (is_negative)
    {
        result = 1/result;
    }

    return result;
}
