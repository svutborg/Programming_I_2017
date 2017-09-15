#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char key;
    printf("Type q to quit\n");


    while (key != 'q')
    {
        key = getch(); // getch() is defined in conio.h
    }

    printf("Quitting... bye!");

    return 0;
}
