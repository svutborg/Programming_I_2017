/*  Write your own small program that prints an integer number in one or more different number formats based on the user input
        Binary (base 2)
        Hexadecimal (base 16)
        Octal (base 8)
        And a base of your choice
    Your program should be called by the following structure
        <program name> <format specifier> <base 10 number>
    Additionally your program should have a help function to specify to the user how to use the program
*/
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 30 // This BUFFER_SIZE dictates how many characters can be used for the output

void print_help();
void convert_10_to_N(int N, int number, char *result);

void convert(int num, int base, char *result)
{
    if( (base > 1)&&(num >= 0) ) // Base needs to be larger than one (less would not make sense)
    {
        switch(base)
        { // If the bases are have a sprintf format specifier, use that one
        case 8:
            sprintf(result, "%o", num);
            break;
        case 10:
            sprintf(result, "%d", num);
            break;
        case 16:
            sprintf(result, "%X", num);
            break;
        default: // If the new base is not a standard format for sprintf, convert the number manually
            convert_10_to_N(base, num, result);
            break;
        }
    }
    else
        sprintf(result, "Error! Base or number is negative");
}

int main(int argc, char *argv[])
{
    char result[BUFFER_SIZE];
    if (argc != 3) // <program name> <format specifier> <base 10 number>
    {
        print_help();
    }
    else
    {
        convert(atoi(argv[2]), atoi(argv[1]), result);
        printf("The result is: %s", result);
    }

    return 0;
}

/* Prints User help menu*/
void print_help()
{
    printf("\nUsage: SolutionSuggestion1 format_specifier base_10_number\n");
    printf("\tBoth arguments should be positive integer numbers\n\n");
    printf("Options:\n");
    printf("%15s %s", "format_specifier:", "New base number; E.g. 16 for Hexadecimal\n");
    printf("%15s %s", "base_10_number:", "Original Number in base 10 (decimal)\n");
}

/* Converts a base 10 number to base N */
void convert_10_to_N(int N, int number, char *result)
{
    char buffer[BUFFER_SIZE]; // Temporary output buffer
    int index = 0;
    int length;
    int quotient = number;
    int remainder;

    do
    {   /* use the method of integer division and add the remainder to the output */
        remainder = quotient%N;
        quotient = quotient/N;
        if(remainder <= 9) // If the resulting number is larger than 9, use characters A, B, C etc.
        {
            buffer[index++] = remainder+'0';
        }
        else
        {
            buffer[index++] = remainder-10+'A';
        }
    }
    while(quotient >= N); // As long as the remaining number is larger than the new base, the number needs to be further fragmented

    // Add the remaining part of the number
    if(quotient <= 9)
    {
        buffer[index++] = quotient+'0';
    }
    else
    {
        buffer[index++] = quotient-10+'A';
    }
    length = index-1;
    /* reverse the order of the characters and insert into return buffer */
    while(index-- > 0)
    {
        result[length-index] = buffer[index];
    }
    result[length+1] = '\0'; // Terminate string
}
