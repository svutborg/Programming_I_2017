/* Write a program that shows the values (in hex) of the expressions 0xFFFF^0x8888, 0xABCD & 0x4567, and 0xDCBA | 0x1234.
*/
#include <stdio.h>
#include <stdlib.h>

void draw_box();



int main()
{
    /* Solution 1 */
    /* This piece of code prints the solution to the exercise */
    //printf("expression      | result in HEX format\n");
    //printf("0xFFFF ^ 0x8888 | %X\n", 0xFFFF ^ 0x8888);
    //printf("0xABCD & 0x4567 | %X\n", 0xABCD & 0x4567);
    //printf("0xDCBA | 0x1234 | %X\n", 0xDCBA | 0x1234);


    /* Solution 2 */
    /* This piece of code prints the solution to the exercise in a far more complicated and elaborate way */
    draw_box();

    return 0;
}

#define ROW_WIDTH       45

#define UPPER_LEFT      0xC9
#define UPPER_RIGHT     0xBB
#define UPPER_MIDDLE    0xCB

#define LEFT_MIDDLE     0xCC
#define RIGHT_MIDDLE    0xB9
#define CENTER_MIDDLE   0xCE

#define LOWER_LEFT      0xC8
#define LOWER_RIGHT     0xBC
#define LOWER_MIDDLE    0xCA

#define VERTICAL        0xBA
#define HORISONTAL      0xCD
void draw_box()
{
    // This example uses extended ascii characters to present the result
    char i, j;


    for (j = 0; j < 7; j++)
    {
        switch(j)
        {
        case 0: // top row
            for(i = 0; i<ROW_WIDTH; i++)
            {
                switch (i)
                {
                case 0: // top left corner
                    putchar(UPPER_LEFT);
                    break;
                case 18: // top middle divider
                    putchar(UPPER_MIDDLE);
                    break;
                case ROW_WIDTH-1: // top right corner
                    putchar(UPPER_RIGHT);
                    putchar('\n');
                    break;
                default: // line
                    putchar(HORISONTAL);
                    break;
                }
            }
            break;
        case 1: // title row
            printf("%c %15s %c %*s %c\n", VERTICAL, "expression", VERTICAL, ROW_WIDTH-22,"result in HEX format", VERTICAL);
            break;
        case 2: // title separator row
            putchar(LEFT_MIDDLE);
            for(i = 1; i<ROW_WIDTH-1; i++)
            {
                if(i != 18)
                {
                    putchar(HORISONTAL);
                }
                else
                {
                    putchar(CENTER_MIDDLE);
                }

            }
            putchar(RIGHT_MIDDLE);
            putchar('\n');
            break;
        case 3:
            printf("%c %15s %c %*X %c\n", VERTICAL, "0xFFFF ^ 0x8888", VERTICAL, ROW_WIDTH-22, 0xFFFF ^ 0x8888, VERTICAL);
            break;
        case 4:
            printf("%c %15s %c %*X %c\n", VERTICAL, "0xABCD & 0x4567", VERTICAL, ROW_WIDTH-22, 0xABCD & 0x4567, VERTICAL);
            break;
        case 5:
            printf("%c %15s %c %*X %c\n", VERTICAL, "0xDCBA | 0x1234", VERTICAL, ROW_WIDTH-22, 0xDCBA | 0x1234, VERTICAL);
            break;
        case 6:
            putchar(LOWER_LEFT);
            for(i = 1; i<ROW_WIDTH-1; i++)
            {
                if(i != 18)
                {
                    putchar(HORISONTAL);
                }
                else
                {
                    putchar(LOWER_MIDDLE);
                }

            }
            putchar(LOWER_RIGHT);
            putchar('\n');
            break;
        }
    }
}
