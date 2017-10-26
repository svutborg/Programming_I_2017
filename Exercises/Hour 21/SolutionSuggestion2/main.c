/*  Write a program to receive a string entered by the user,
 *      and then save the string into a file with the name also given by the user.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[50], filename[20];

    printf("Enter a line that you want to save:\n");
    gets(buffer); // Get string form user

    printf("Enter a filename to save to:\n");
    gets(filename); // get filename
    FILE *fp = fopen(filename,"w"); // Open file for writing

    fputs(buffer,fp); // write to file
    fclose(fp); // close file
    return 0;
}
