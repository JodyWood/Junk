#include <stdio.h>
#include <stdlib.h>
#define DIGITS 15

int main()
{
	int age;
	long age2;
	char years[DIGITS];

	printf("How old was Methuselah? ");
	fgets(years, DIGITS, stdin);
	age = atoi(years);
	printf("Methuselah was %d years old.\n", age);

	return(0);
}

