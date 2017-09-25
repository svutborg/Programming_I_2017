#include <stdio.h>
#include <stdlib.h>

int main()
{
    int triangle[10][10], i, j;
    triangle[0][0] = 1;

    for (i = 1; i < 10; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if(j-1 < 0)
            {
                triangle[i][j] = 0 + triangle[i-1][j];
            }
            else if(j == i)
            {
                triangle[i][j] = triangle[i-1][j-1] + 0;
            }
            else
            {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%3d ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}
