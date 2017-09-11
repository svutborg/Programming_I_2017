#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("velkommen til program3000... vælg din option:\n");
    printf("a: option 1...\n");
    printf("b: option 2...\n");
    printf("c: option 3...\n");
    printf("d: option 4...\n");

    char choice, ch, ch1, ch2;
    choice = getchar();

    printf("Du valgte %c", choice);

    printf("Giv et andet input..");
    ch = getchar();
    printf("Du valgte %c", ch);


    return 0;
}
