#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char c;

    while(1)
    {
        c = getch();

        if (c == 'x')
        {
            printf("Exiting\n");
            break;
        }
        else if (c == 'X')
        {
            printf("Exiting\n");
            break;
        }
        else
        {
            printf("Continuing!\n");
        }

    }

    return 0;
}
