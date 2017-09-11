/*  Write a program to put the characters B, y, and e together on the screen.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // You have a couple of options here, you can use either putc(), putchar() or printf() for all three letters
    // option 1:
    putc('B', stdout);
    putc('y', stdout);
    putc('e', stdout);

    putchar('\n');

    // option 2:
    putchar('B');
    putchar('y');
    putchar('e');

    putchar('\n');

    // option 3:
    printf("%c%c%c", 'B', 'y', 'e');

    return 0;
}
