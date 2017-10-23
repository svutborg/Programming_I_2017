/*  Rewrite the program in Listing 20.1 by switching the order between the statement in line 15 and the statement in line 17.
    What do you get after running the rewritten program? Why?
*/

/* 20L01.c Referencing a union */
#include <stdio.h>
#include <string.h>

int main(void)
{
	union menu {
		char name[23];
		double price;
	} dish;

	printf("The content assigned to the union separately:\n");
	/* reference name */
	strcpy(dish.name, "Sweet and Sour Chicken");
	/* reference price */
	dish.price = 9.95; // <-- line 17
	printf("Dish Name: %s\n", dish.name); // <-- line 15
	printf("Dish Price: %5.2f\n", dish.price);

	return 0;
}

// before:
// The content assigned to the union separately:
// Dish Name: Sweet and Sour Chicken
// Dish Price:  9.95

// after:
// The content assigned to the union separately:
// Dish Name: fffff�#@d Sour Chicken
// Dish Price:  9.95

// Since this is a union, the memory is shared, thus assigning a price before printing the name of the dish, overwrites some of the text in the name field
