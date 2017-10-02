/*  Declare and define a function, called MultiTwo(), that can perform multiplication on two integer variables.
    Call the MultiTwo() function from the main() function and pass two integers to MultiTwo().
    Then print out the result returned by the MultiTwo() function on the screen.
*/

#include <stdio.h>
#include <stdlib.h>

// function declaration (prototype)
int MultiTwo(int a, int b);

int main()
{
    int x = 4, y = 5;

    printf("The result of multiplying %d and %d is %d\n", x, y, MultiTwo(x, y));
    return 0;
}

// function definition
int MultiTwo(int a, int b)
{
    return a * b;
}
