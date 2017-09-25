/* Write a program to update the value of the double variable flt_num from 123.45 to 543.21 by using a double pointer.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double dbl_num = 123.45; // Initial value
    double *dbl_ptr;
    dbl_ptr = &dbl_num; // directing the pointer to point to the number variable.

    printf("The value of dbl_num before: %.2lf\n", dbl_num); // %.2lf to display a double with two decimal places

    *dbl_ptr = 543.21; // The asterisk before dbl_ptr dereferences the pointer (to whatever the pointer is pointing at)

    printf("The value of dbl_num after:  %.2lf\n", dbl_num);

    return 0;
}
