#include <stdio.h>

int main(void)
{
	// Define a 20-character array.
	char name[20];
	char color[20];

	printf("What is your name? ");

	// %s is a string placeholder.
	scanf("%s", name);
	// Press Enter to end input.
	
	printf("What is your favorite color? ");
	scanf("%s", color);

	printf("%s's favorite color is %s.\n", name, color);
	printf("%s's favorite color is %% %s %%.\n", name, "periwinkle");
}

// & dereferences a variable location, but strings don't
// require it.

