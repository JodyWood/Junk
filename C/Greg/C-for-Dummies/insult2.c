#include <stdio.h>
#include <string.h>
#define MAX 20

int main(void)
{
	char jerk[MAX];

	printf("Name of some jerk you know: ");
	fgets(jerk, MAX, stdin);
	jerk[strcspn(jerk, "\n")] = 0;

	// In this version of the program, we try to change
	// printf to puts. But that won't work! puts only
	// accepts a single string argument, of course. It's
	// just really simple!
	//puts("Yeah, I think %s is a jerk too.\n", jerk);

	// This actually works:
	puts(jerk);
	puts("I guess we're both bad people.");
}

// Now, you actually can print the value of a variable
// with puts, but that's ALL you can print with it.
// So whether a string variable or a string literal,
// puts only accepts a single argument, and it always
// tacks on a linefeed character at the end.

