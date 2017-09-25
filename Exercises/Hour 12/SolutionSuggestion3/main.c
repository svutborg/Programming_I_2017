/*  Given this two-dimensional unsized array:
    char list_ch[][2] = {   {'1', 'a'},
                            {'2', 'b'},
                            {'3', 'c'},
                            {'4', 'd'},
                            {'5', 'e'},
                            {'6', 'f'}};
    write a program to measure the total bytes taken by the array, and then print out all elements of the array.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char list_ch[][2] = {   {'1', 'a'},
                            {'2', 'b'},
                            {'3', 'c'},
                            {'4', 'd'},
                            {'5', 'e'},
                            {'6', 'f'}};


    printf("The array takes up %d bytes.\n", sizeof(list_ch));

    printf("The elements are:\n");
    for (i = 0; i < 6; i++)
    {   // printing row for row
        printf("%c, %c\n", list_ch[i][0], list_ch[i][1]);
    }


    return 0;
}
