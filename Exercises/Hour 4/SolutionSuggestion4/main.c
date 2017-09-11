/* Given the declaration double dbl_num = 123.456;, write a program that prints out the value of dbl_num in both floating-point and scientific notation formats. (Hint: Use %f and %e)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double dbl_num = 123.456;
    // using %f formats the number in floating point notation, and %e formats it in scientific notation
    printf("The value of dbl_num is %f in floating point notation and %e in scientific notation", dbl_num, dbl_num);
    return 0;
}
