/*
    Given the following:
        An int variable with block scope and temporary storage
        A constant character variable with block scope
        A float local variable with permanent storage
        A register int variable
        A char pointer initialised with a null character
    write declarations for all of them.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    {
        /* Block: All variables declared within here will not be accessible from outside this block */
        int i;          // An int variable with block scope and temporary storage
        const char c;   // A constant character variable with block scope
        static float f; // A float local variable with permanent storage
    }

    register int reg_i; // A register int variable
    char *ch_ptr = 0;   // A char pointer initialised with a null character

    printf("Hello world!\n");
    return 0;
}
