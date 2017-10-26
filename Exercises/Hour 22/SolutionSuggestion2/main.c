/*  Given a double value of 123.45, and an int value of 10000,
 *      write a program to save them into a binary file, called data.bin,
 *      and then read them back from the binary file. Also, print out what you are writing or reading.
 *      What do you think the size of the binary file will be?
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d_val = 123.45, d_read;
    int i_val = 10000, i_read;

    FILE *fp = fopen("data.bin","w+b"); // Writing binary

    // Writing to file
    fwrite(&d_val, sizeof(double), 1, fp);
    fwrite(&i_val, sizeof(int), 1, fp);

    rewind(fp); // rewinding stream

    // reading back from file
    fread(&d_read, sizeof(double), 1, fp);
    fread(&i_read, sizeof(int), 1, fp);

    // Printing the read values
    printf("Value of double read from file:  %lf\n", d_read);
    printf("Value of integer read from file: %d", i_read);


    // Closing stream
    fclose(fp);

    // The file is 12 bytes on my machine: 8 from double and 4 from int value

    return 0;
}
