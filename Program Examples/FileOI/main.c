#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int i = 65;
    char c;

    fp = fopen("testfile.txt","a+b");

    fputs("her er noget andet tekst!", fp);
    fwrite(&i,sizeof(int),1,fp);

    fclose(fp);

    fp = fopen("testfile.txt","r+b");

    do
    {
        c = fgetc(fp);
        putchar(c);

    }while (c != EOF);

    fclose(fp);
    return 0;
}
