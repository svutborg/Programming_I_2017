/* Given a character variable ch and ch = ‘A’, write a program to update the value of ch to decimal 66 by using a pointer. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = 'A';

    char *cp = &ch; // declaring cp to point to ch


    *cp = 66; // dereferencing cp to gain access to the value of whatever it is pointing at

    putchar(ch); // put ch to the console, to see if it worked
    return 0;
}
