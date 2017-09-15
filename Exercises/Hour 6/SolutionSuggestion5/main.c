/* The following program is supposed to compare the two variables, x and y, for equality. What’s wrong with the program? (Hint: Run the program to see what it prints out.)
#include <stdio.h>
main()
{
	int x, y;
    x = y = 0;
    printf(“The comparison result is: %d\n”, x = y);
    return 0;
}

*/
#include <stdio.h>

int main()
{
    int x, y;
    x = y = 0;
    printf("The comparison result is: %d\n", x = y); // The problem is that comparing x is assigned the value of y, not compared, to compare use ==
    return 0;
}
