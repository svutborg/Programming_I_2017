/*  Write a program to read the text file haiku.txt and count the number of characters in the file.
 *      Also, print out the content of the file and the total character number on the screen.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 0;
    FILE *fp = fopen("../haiku.txt","r");  // Opening file stream change path if needed
    if (fp != NULL)
    {   // If the file opened properly
        printf("File opened\n");
        while(fgetc(fp) != EOF)
        {   // Read characters from file, and increment counter until EndOfFile is reached
            counter++;
        }
        printf("%d characters in the file.", counter); // Print counter
    }

    fclose(fp);  // Close file again
    return 0;
}
