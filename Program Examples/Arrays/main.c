#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[10];
    int i;
    scanf("%s", s);

    //printf("Du tastede: %s", s);


    for (i = 0; i < 10; i++)
    {
        //printf("%d\n",s[i]);
        printf("%p %d\n", s+i, *(s+i));
    }

    return 0;
}
