#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;

    while(i<20)
    {
        i++;
        /*
        if(i%4 == 0)
        {
            continue;
        }
        printf("%d\n",i);
        */
        switch(i)
        {
        case 1:
            printf("i er 1\n");
            break;
        case 3:
        case 5:
        case 8:
            continue;
        case 10:
            i = 42;
            break;
        case 17:
            exit(0);
        default:
            printf("%d\n", i);
            break;
        }
    }

    printf("Done!");

    return 0;
}
