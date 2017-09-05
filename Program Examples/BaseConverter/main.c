#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 30
int convert_N_to_10(int N, char* input)
{
    int result = 0;
    int counter = 0;
    int i;
    int multiplier = 1;

    while(input[counter] != '\0')
    {
        counter++;
    }
    counter--;

    for(i = counter; i >= 0; i--)
    {
        if(input[i] <= '9')
        {
            result += multiplier*(input[i]-'0');
        }
        else
        {
            if(input[i] <= 'Z')
            {
                result += multiplier*(input[i]-'A'+10);
            }
            else
            {
                result += multiplier*(input[i]-'a'+10);
            }
        }
        multiplier *= N;
    }

    return result;
}

void convert_10_to_N(int N, int number, char *result)
{
    char buffer[BUFFER_SIZE];
    int index = 0;
    int length;
    int quotient = number;
    int remainder;

    do
    {
        remainder = quotient%N;
        quotient = quotient/N;
        if(remainder <= 9)
        {
            buffer[index++] = remainder+'0';
        }
        else
        {
            buffer[index++] = remainder-10+'A';
        }
    }
    while(quotient >= N);

    if(quotient <= 9)
    {
        buffer[index++] = quotient+'0';
    }
    else
    {
        buffer[index++] = quotient-10+'A';
    }
    length = index-1;
    while(index-- > 0)
    {
        result[length-index] = buffer[index];
    }
}


int main()
{
    char input[BUFFER_SIZE];
    int num = 1500;
    int oldbase = 10;
    int newbase = 16;
    char *buffer = (char*) calloc(BUFFER_SIZE, sizeof(char));

    printf("This program will convert a number from one base to another.\n");

    printf("Enter the base of the number you wish to convert from:");
    scanf("%d", &oldbase);

    printf("Enter the base of the number you wish to convert to:");
    scanf("%d", &newbase);

    printf("Enter the number you wish to convert:");
    scanf("%s", input);
    num = convert_N_to_10(oldbase, input);

    printf("Converting %s from base %d to %d\n", input, oldbase, newbase);
    convert_10_to_N(newbase, num, buffer);
    printf("%s", buffer);

    return 0;
}
