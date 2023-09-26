#include <stdio.h>
#include <string.h>
#define MAX 20
#define YOURMOM "Brenda Evans"

int main()
{
	char kitty[MAX];

	printf("What would you like to name your cat? ");

	fgets(kitty, MAX, stdin);
	kitty[strcspn(kitty, "\n")] = 0; // ²

	printf("%s is a nice name. What else do you have in mind? ", kitty);
	fgets(kitty, MAX, stdin);
	kitty[strcspn(kitty, "\n")] = 0; // ²
	printf("%s is nice, too.\n", kitty);

	printf("The kitty is owned by your mom, %s.\n", mymom);

	return(0);
}

