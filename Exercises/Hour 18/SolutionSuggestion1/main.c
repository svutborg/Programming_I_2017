/*  Write a program to print out the values represented by the enumerated names declared in Quiz question 2 in this hour.
        enum tag { name1, name2 = 10, name3, name4 };
*/
#include <stdio.h>
#include <stdlib.h>

enum tag { name1, name2 = 10, name3, name4 };

int main()
{
    printf("name1: %d\nname2: %d\nname3: %d\nname4: %d", name1, name2, name3, name4 );

    return 0;
}
