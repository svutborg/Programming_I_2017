/*  Assume that the following paragraph of Tao Te Ching is saved in a text file called LaoTzu.txt:
 *      Be bent, and you will remain straight.
 *      Be vacant, and you will remain full.
 *      Be worn, and you will remain new.
 *  Write a program to use ftell() to find the positions of the three strings in the file,
 *  and then call fseek() to set the file position indicator in such a
 *  way that the three strings are printed out in reverse order.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("LaoTzu.txt", "r"); // Open file
    int indices[3], index = 0;
    char c, line[50];

    while( (c = fgetc(fp)) != EOF)
    {   // read characters from the file until reaching the end of file
        if (c == 'B')
        {   // Every line starts with a capital B, write down the indices of where they appear
            indices[index++] = ftell(fp);
        }
    }

    for(index-- ;index >= 0 ; index--)
    {   // Loop backwards in the recorded indices and move the file position indicator
        fseek(fp,indices[index]-1,SEEK_SET); // move the file position indicator to selected index
        fgets(line,49,fp); // read a line from file
        printf("%s",line); // print the line
    }

    fclose(fp); // close fine stream
    return 0;
}
