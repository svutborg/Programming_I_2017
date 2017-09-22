/* Given an angle of 30 degrees, write a program to calculate its sine and tangent values.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float angle_deg;
    float angle_radians;

    printf("Enter an angle in degrees.");
    scanf("%f", &angle_deg);

    angle_radians = (angle_deg*M_PI)/180;

    printf("sin(%.2f\xf8)=%.2f\n", angle_deg, sin(angle_radians)); // \xf8 inserts the degree sign (ascii char 0xf8)
    printf("tan(%.2f\xf8)=%.2f\n", angle_deg, tan(angle_radians));


    return 0;
}
