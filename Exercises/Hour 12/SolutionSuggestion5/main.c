/*  Given the following array:
    double list_data[6] = {
        1.12345,
        2.12345,
        3.12345,
        4.12345,
        5.12345};
    use the two equivalent ways taught in this lesson to measure the total memory space taken by the array, and then display the results on the screen.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double list_data[6] = {
        1.12345,
        2.12345,
        3.12345,
        4.12345,
        5.12345};

    // Method 1
    printf("Result using method 1: %d bytes.\n", sizeof(list_data));

    // Method 2
    printf("Result using method 2: %d bytes.\n", sizeof(double)*6);
    return 0;
}
