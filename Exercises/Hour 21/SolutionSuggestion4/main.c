/*  Rewrite exercise 3. This time, try to write one block of characters (that is, one string) at a time.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = "Disk file I/O is fun.";
    FILE *fp = fopen("test_21.txt", "w");

    fputs(str, fp);
    puts(str);

    fclose(fp);
    return 0;
}
