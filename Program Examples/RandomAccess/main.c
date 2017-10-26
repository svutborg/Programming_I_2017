#include <stdio.h>
#include <stdlib.h>

int countFile(FILE* filepointer);

int main()
{
    FILE *fp;
    char c;
    char buf[200];

    freopen("console.txt","w",stdout);

    int tal[5] = {17, 4, 42, -45, 0};

    fp = fopen("testfile.txt","w+");

    fputs("her er noget andet tekst!\n", fp);
    fprintf(fp, "data: %d, %d, %d, %d, %d\n",tal[0], tal[1], tal[2],tal[3],tal[4]);

    printf("Filen indeholder %d tegn.\n", countFile(fp));

    rewind(fp); //  fseek(fp, 0, SEEK_SET);

    fread(buf, sizeof(char), 200, fp);
    //fscanf(fp, "%s", buf);

    printf("%s", buf);




    // TODO: Fix this!
    //int tal2[5];
    //fseek(fp,25,SEEK_SET);
    //fscanf(fp, "data: %d, %d, %d, %d, %d", &tal2[0], &tal2[1],&tal2[2],&tal2[3],&tal2[4]);
    //printf("\nChecksum: %d", tal2[0]+tal2[1]+tal2[2]+tal2[3]+tal2[4]);

    fclose(fp);
    return 0;
}

int countFile(FILE *filepointer)
{
    fseek(filepointer,0,SEEK_END);
    return ftell(filepointer);
}
