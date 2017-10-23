/* 19L02.c Initializing a structure */
#include <stdio.h>
typedef struct {
    int id;
    char name[32];
} employee;

void printEmployeeInfo(employee X)
{
    printf("Employee Name: %s\n", X.name);
	printf("Employee ID #: %04d\n\n", X.id);
}

int main(void)
{
    employee info = {1, "B. Smith"};

	printf("Here is a sample:\n");
	printEmployeeInfo(info);

	printf("What's your name?\n");
	gets(info.name);
	printf("What's your ID number?\n");
	scanf("%d", &info.id);

	printf("\nHere are what you entered:\n");
	printEmployeeInfo(info);

	return 0;
}
