#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void helpMenu()
{
    printf("Printing help menu...\n-help: list program options\n...\n");
}

int main(int argc, char *argv[])
{
    int i;

    for(i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
        if(strcmp("-help",argv[i]) == 0)
            helpMenu();
    }


    return 0;
}
