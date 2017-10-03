#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} days;
//typedef unsigned char byte;

int main()
{
    days weekday = Tuesday;
    days tomorrow;
    weekday = Tuesday;
    printf("What day is it today? ");
    char str[20];
    gets(str);

    // Parsing the entered weekday
    // TODO: ignore Case on weekdays to allow for mixed case input
    if(strcmp(str,"Monday") == 0)
    {
        weekday = Monday;
    }
    else
    {
        if(strcmp(str,"Tuesday") == 0)
        {
            weekday = Tuesday;
        }
        else
        {
            if(strcmp(str,"Wednesday") == 0)
            {
                weekday = Wednesday;
            }
            else
            {
                if(strcmp(str,"Thursday") == 0)
                {
                    weekday = Thursday;
                }
                else
                {
                    if(strcmp(str,"Friday") == 0)
                    {
                        weekday = Friday;
                    }
                    else if(strcmp(str,"Saturday") == 0)
                    {
                        weekday = Saturday;
                    }
                    else if(strcmp(str,"Sunday") == 0)
                    {
                        weekday = Sunday;
                    }
                }
            }
        }
    }

    tomorrow = (weekday + 1)%7 ;
    switch( tomorrow)
    {
    case Monday:
        printf("It is Monday tomorrow!\n");
        break;
    case Tuesday:
        printf("It is Tuesday tomorrow!\n");
        break;
    case Wednesday:
        printf("It is Wednesday tomorrow!\n");
        break;
    case Thursday:
        printf("It is Thursday tomorrow!\n");
        break;
    case Friday:
        printf("It is Friday tomorrow!\n");
        break;
    case Saturday:
        printf("It is Saturday tomorrow!\n");
        break;
    case Sunday:
        printf("It is Sunday tomorrow!\n");
        break;
    }
    // There is a bug in this line for You to solve  :D
    printf("Only %.1f days to weekend :D !", ( (float)((Saturday-weekday)%7))-0.5);

    return 0;
}
