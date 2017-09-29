#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_count(char *str)
{
    int count = 0;

    while(str[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char a[20];
    char b[20];

    /*reading string*/
    printf("Enter a string:\n");
    gets(a);

    printf("You entered: %s, length: %d\n", a, my_count(a)); // my_count is replacing strlen()

    /* Copying strings */
    strcpy(b, a);
    //a[4] = 'Q';
    printf("b now contains: %s\n", b);
    printf("a now contains: %s\n", a);

    return 0;
}
