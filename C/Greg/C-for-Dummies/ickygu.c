#include <stdio.h>
#include <string.h>

int main()
{
	// Initialize a bunch of new variables to zero.
	int begin, first, count;
	printf("begin before initializing: %d\n", begin);
	// Initialize a new 'start' variable, along with the above ones.
	int start = begin = first = count = 0;
	printf("begin  after initializing: %d\n", begin);

	// Notice there's no number inside the square brackets.
	// Instead, the compiler sets aside exactly enough space
	// in memory to hold the characters in the string.
	char menuitem[] = "Slimy Orange Stuff \"Icky Woka Gu\"";
	int pints = 2;
	float price = 1.45;

	printf("Today's special: %s\n", menuitem);
	printf("You want %d pint.\n", pints);
	printf("That be $%.2f, please.\n", pints * price);

	int video = 800 * 600;
	printf("%d\n", video);
	printf("%lu\n", strlen(menuitem));

	return(0);
}

// C has two main types of variables:
// numeric
// string

// C numeric types vary based on:
// size
// precision

// The book says to cluster all variable declarations right up at the top.
// I remember reading about C99 or whatever, and it allows you to not have
// to do that, but even in C# I always liked to declare right up at the top.

// Don't name variables similarly because the compiler is only required to
// take note of so many characters in a variable name. Exceed that with
// ambiguity and you may end up with conflicting names.

// Somewhere in the Help files of every compiler are the rules for naming
// variables. Find 'em and know 'em.

// Interestingly, C is mostly all lowercase, and COBOL is mostly all uppercase.




