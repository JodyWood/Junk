#include <stdio.h>

int main(void)
{
	// These two lines are equivalent.
	printf("%s", "Hello, crazy lady\n");
	printf("%s, %s %s", "Hello", "crazy", "lady\n");

	// Notice that the second line of code has the
	// comma in the format string, whereas the first
	// line of code has it embedded in the string
	// argument and the format string merely specifies
	// the data type.

	printf("Goodbye, m'lady\n");
}

