/*
    Given the following declaration and definition of a structure:
        struct automobile {
            int year;
            char model[10];
            int engine_power;
            double weight;
        } sedan = {1997, "New Model", 200, 2345.67};
    write a program to display on the screen the initial values held by the structure.
*/

#include <stdio.h>
#include <stdlib.h>

struct automobile {
    int year;
    char model[10];
    int engine_power;
    double weight;
} sedan = {1997, "New Model", 200, 2345.67};

int main()
{

    printf("The initial values of a new sedan variable is:\n");
    printf("year:         %d\n", sedan.year);
    printf("model:        %s\n", sedan.model);
    printf("engine_power: %d\n", sedan.engine_power);
    printf("weight:       %.2f", sedan.weight);

    return 0;
}
