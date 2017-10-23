#include <stdio.h>
#include <stdlib.h>


int main()
{
    typedef union
    {
        struct
        {
            char num:7;
            char sign:1;
        };
        char signedNumber;
    } myNum;

    myNum a;

    a.num = 17;

    a.sign = 1;


    printf("%d",a.signedNumber);

    return 0;
}
