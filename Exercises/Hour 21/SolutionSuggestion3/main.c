/*  Given the string “Disk file I/O is fun.” write a program to write the string into a file called
 *      test_21.txt by writing one character at a time. Meanwhile, print out the string on the screen.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = "Disk file I/O is fun.";
    FILE *fp = fopen("test_21.txt", "w");
    int counter = 0;

    while(str[counter])
    {
        fputc(str[counter], fp);
        putc(str[counter], stdout);
        counter++;
    }

    fclose(fp);
    return 0;
}
