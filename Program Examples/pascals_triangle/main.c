/*
    This program creates a Pascal's triangle and prints it on the screen
    Example:
                      1
                    1   1
                  1   2   1
                1   3   3   1
              1   4   6   4   1
            1   5  10  10   5   1
          1   6  15  20  15   6   1
        1   7  21  35  35  21   7   1
      1   8  28  56  70  56  28   8   1
    1   9  36  84 126 126  84  36   9   1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*  Declaring a two-dimmentional array to hold the resulting pascals triangle
        notice that it is square, and has 10 indices in each direction
    */
    int triangle[10][10], i, j;
    triangle[0][0] = 1; // Setting the first element in the triangle

    // Outer loop: This is used to loop through the rows
    for (i = 1; i < 10; i++)
    {
        // Inner loop: This is used to loop through the cells in the current row
        // Notice that there are as many cells as the current row (j <= i)
        for (j = 0; j <= i; j++)
        {
            // This adds the two cells above the current cell
            // If one of the above cells are out of bounds (There is nothing there: add 0)
            if(j-1 < 0)
            {   // There is nothing to the left above
                triangle[i][j] = 0 + triangle[i-1][j];
            }
            else if(j == i)
            {   // There is nothing to the right above
                triangle[i][j] = triangle[i-1][j-1] + 0;
            }
            else
            {   // Both of the cells above are populated
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }

    // This is the same nested loop structure as right above and is used to print the array to the terminal
    for (i = 0; i < 10; i++)
    {
        /* The lines below has been added since the class
            These are purely for formatting what is displayed
        */
            printf("%*s",(10-i)*2,"");

        /*  What follows is original content as seen in class
        */
        for (j = 0; j <= i; j++)
        {
            printf("%3d ", triangle[i][j]);
        }
        printf("\n");
    }

    return 0;
}
