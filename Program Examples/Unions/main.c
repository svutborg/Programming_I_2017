#include <stdio.h>
#include <stdlib.h>

union shared_mem
{
    int large_number;
    char smaller_number;
};

int main()
{
    union shared_mem u;

    u.large_number = 350; // Writes a large number to the union

    // Print both values
    printf("Large Num: %d\nSmall Num: %d\n", u.large_number, u.smaller_number);

    // Write a small value to the union
    u.smaller_number = 3;

    // print both values
    printf("Large Num: %d\nSmall Num: %d", u.large_number, u.smaller_number);

    return 0;
}
