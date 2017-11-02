#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[] = {'a', 'b', 'c', 'd'};
    char *c_ptr;
    c_ptr = &c[0];

    printf("%c %c %c %c\n", *c_ptr, *(c_ptr+1), *(c_ptr+2), *(c_ptr+3));


    int i[] = {300, 43, 44, 45};
    int *i_ptr;
    i_ptr = &i[0];

    printf("%d %d %d %d\n", *(i_ptr+0), *(i_ptr+1), *(i_ptr+2), *(i_ptr+3));

    void* vp;

    vp = i_ptr;
    c_ptr = vp;

    printf("%c %c %c %c\n", *c_ptr, *(c_ptr+1), *(c_ptr+2), *(c_ptr+3));

    return 0;
}
