/* Rewrite the program in Listing 15.2. This time use the format specifier %c, instead of %s, to print out the character string of the local time on your computer.
*/

/* 15L02.c: Functions with no arguments */
#include <stdio.h>
#include <time.h>

void GetDateTime(void);

int main()
{
	printf("Before the GetDateTime() function is called.\n");
	GetDateTime();
	printf("After the GetDateTime() function is called.\n");
	return 0;
}
/* GetDateTime() definition */
void GetDateTime(void)
{
	time_t now;
	char *t;
	int index = 0;

	printf("Within GetDateTime().\n");
	time(&now);
	t = asctime(localtime(&now)); // Storing the time string in t
    printf("Current date and time is: ");
	while(t[index]) // This loop will continue until the current index is a null character ('\0')
        printf("%c", t[index++]); // Print out the current character
}
