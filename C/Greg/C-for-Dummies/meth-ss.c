#include <stdio.h>
#include <stdlib.h>

// Probably best to use 'const' rather than #define for strings.
const char prompt[] = "You gotta fight...for your right...";
// The 'const' keyword ensures it cannot be reassigned and reused.
// Notice that this guy is global.

int main()
{
	printf("%s\n", prompt);

	int contributed = 65 - 19;
	int received = 969 - 65;


	printf("Methuselah contributed to Social Security for %i years\n", contributed);
	printf("Methuselah collected from Social Security for %i years\n", received);
	printf("\n");

	// We could just inline the calculations instead of putting them in a variable...
	printf("Methuselah contributed to Social Security for %i years\n", 65-19);
	printf("Methuselah collected from Social Security for %i years\n", 969 - 65);
	printf("\n");

	// And of course we could also just do the calculation in our head,
	// and just plug in the values.
	printf("Methuselah contributed to Social Security for %i years\n", 46);
	printf("Methuselah collected from Social Security for %i years\n", 904);

	// The point being that %d is simply looking for an integer, whether it
	// be a constant, a mathematical expression, or a variable.

	return(0);
}

// Methuselah got his first job at 19, so subtract that many
// years to get how many years he worked.

// So since he wasn't collecting for that first 65 years,
// subtract that from his lifespan to get the total number
// of years he collected benefits (theoretically, ha!).


