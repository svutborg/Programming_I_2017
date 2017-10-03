/*  Given the following declarations:
        typedef char WORD;
        typedef int SHORT;
        typedef long LONG;
        typedef float FLOAT;
        typedef double DFLOAT;
    write a program to measure the sizes of the synonyms to the data types.
*/

#include <stdio.h>
#include <stdlib.h>

typedef char WORD;
typedef int SHORT;
typedef long LONG;
typedef float FLOAT;
typedef double DFLOAT;

int main()
{
    printf("The size of %-6s is %d bytes\n", "WORD", sizeof(WORD));
    printf("The size of %-6s is %d bytes\n", "SHORT", sizeof(SHORT));
    printf("The size of %-6s is %d bytes\n", "LONG", sizeof(LONG));
    printf("The size of %-6s is %d bytes\n", "FLOAT", sizeof(FLOAT));
    printf("The size of %-6s is %d bytes\n", "DFLOAT", sizeof(DFLOAT));
    return 0;
}
