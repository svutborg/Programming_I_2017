/*  Read the text file strnum.mix, which is created by the program in Listing 22.3.
 *      Redirect the input stream so that you can use the scanf() function to perform the reading operation.
 */

#include <stdio.h>
#include <stdlib.h>

enum {SUCCESS, FAIL, MAX_NUM = 3, STR_LEN = 23};
void DataRead();

int main()
{
    freopen("strnum.mix", "r", stdin); // Redirecting the input stream to strnum.mix file

    DataRead();

    return 0;
}

// Modified version of DataRead from listing 22.3
void DataRead()
{
    int i;
    int miles;
    char cities[STR_LEN];

    printf("\nThe data read:\n");
    for (i=0; i<MAX_NUM; i++)
    {
        scanf("%s%d", cities, &miles); // Changed from fscanf to scanf
        printf("%-23s %d miles\n", cities, miles);
    }
}
