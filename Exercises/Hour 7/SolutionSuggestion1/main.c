/* What is the difference between the following two pieces of code?
for (i=0, j=1; i<8; i++, j++)
    printf(“%d + %d = %d\n”, i, j, i+j);

for (i=0, j=1; i<8; i++, j++);
    printf(“%d + %d = %d\n”, i, j, i+j);
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for (i=0, j=1; i<8; i++, j++)
        printf("%d + %d = %d\n", i, j, i+j);

    for (i=0, j=1; i<8; i++, j++);      // <-- The difference is this semicolon. This means that the following line is not part of the loop
    printf("%d + %d = %d\n", i, j, i+j);

    return 0;
}
