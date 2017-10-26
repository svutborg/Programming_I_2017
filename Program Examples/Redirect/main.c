#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    freopen(argv[2],"w",stdout);

    system(argv[1]);

    freopen("CON","w",stdout);

    printf("Done!");


    return 0;
}
