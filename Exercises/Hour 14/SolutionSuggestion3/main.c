/*
    Compile and run the following program. What do you get on the screen, and why?
        #include <stdio.h>
        int main()
        {
            int i;
            for (i=0; i<5; i++)
            {
                int x = 0;
                static int y = 0;
                printf("x=%d, y=%d\n", x++, y++);
            }
            return 0;
        }
*/

#include <stdio.h>
int main()
{
    int i;
    for (i=0; i<5; i++)
    {
        int x = 0;
        static int y = 0;
        printf("x=%d, y=%d\n", x++, y++);
    }
    return 0;
}

/* You get:
x=0, y=0
x=0, y=1
x=0, y=2
x=0, y=3
x=0, y=4

x prints as zero because it is declared as 0 each time round the loop, whereas y is incremented.
This is because y is declared as a static variable, and is only declared/initialised the first time in the loop
*/
