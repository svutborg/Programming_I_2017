/* Given three integer variables, x = 512, y = 1024, and z = 2048, write a program to print out their left values as well as their right values. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 512;
    int y = 1024;
    int z = 2048;

    printf("x: left value: %p, and the right value %d\n", &x, x); // using %p for printing the address of the pointer (%x could have been used, but is not garentueed to give the right representation
    printf("y: left value: %p, and the right value %d\n", &y, y);
    printf("z: left value: %p, and the right value %d\n", &z, z);

    return 0;
}
