#include <stdio.h>
#include <stdlib.h>
#define DIGITS 8

int main()
{
	char years[DIGITS];
	int you, methus, diff;

	printf("How old are you? ");
	fgets(years, DIGITS, stdin);
	you = atoi(years);
	methus = 969;
	diff = methus - you;

	printf("You are %d years younger than Methuselah\n", diff);
	return(0);
}

