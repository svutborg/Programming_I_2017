#include <stdio.h>
#include <stdlib.h>

int add100();
int add200();
int add500();
int nitte();

int main()
{
    int (*functions[4])();
    int random_num, saldo = 0;
    functions[0] = add100;
    functions[1] = add200;
    functions[2] = add500;
    functions[3] = nitte;

    while(getchar())
    {
        random_num = (rand()*4)/RAND_MAX;
        saldo += (*functions[random_num])();
        printf("Saldo: %d", saldo);
    }


    return 0;
}

int add100()
{
    printf("Adding 100");
    return 100;
}

int add200()
{
    printf("Adding 200");
    return 200;
}

int add500()
{
    printf("Adding 500");
    return 500;
}

int nitte()
{
    printf("You loose");
    return -10000;
}
