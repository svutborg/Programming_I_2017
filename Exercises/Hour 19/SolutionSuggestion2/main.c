/*  Rewrite the program in Listing 19.2. This time, create a function that can display the content in the employee structure.
    Then, make calls to the function by passing the structure to it.
*/

/* 19L02.c Initializing a structure */
#include <stdio.h>

// The employee struct had to be made globel, in order to use it as an argument type for the show employee function
struct employee {
    int id;
    char name[32];
};

void showEmployee(struct employee *e)
{   // requires a reference to an emplyee struct
    printf("========================== employee ==========================\n");
    printf("|| Employee Name: %-41s ||\n", e->name);
    printf("|| Employee ID #: %-41d ||\n", e->id);
    printf("==============================================================\n");
}

int main(void)
{
	/* structure initialization */
	struct employee info = {
		1,
		"B. Smith"
	};

	printf("Here is a sample:\n");
	showEmployee(&info);

	printf("What's your name?\n");
	gets(info.name);
	printf("What's your ID number?\n");
	scanf("%d", &info.id);

	printf("\nHere are what you entered:\n");
    showEmployee(&info);

	return 0;
}
