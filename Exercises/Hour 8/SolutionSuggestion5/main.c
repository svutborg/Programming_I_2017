/* Use the ?: operator and the for loop to write a program that keeps taking the characters entered by the user until the character q is accounted. (Hint: Put x!=’q’ ? 1 : 0 expression as the second expression in a for statement.)
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char x = ' ';


    for ( ;x!='q' ? 1 : 0; ) // by putting " x!='q' ? 1 : 0 " as the center expression, this will return 0 if x does not equal 'q'
    {
        x = getch();
    }

    /*  optionally you could do the following, but the intent of the code is not as clear.
        by putting the x = getch() in the updating step, it happens every time round the loop
        remove the comment to see the code working
    */
    //for ( ;x!='q' ? 1 : 0; x = getch());


    return 0;
}
