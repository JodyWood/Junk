#include <stdio.h>
#define MAX 15

int main(void)
{
	char buf[MAX];

	printf("Input a string: ");
	gets(buf);
	printf("String is: %s\n", buf);

	printf("Input a string: ");
	fgets(buf, MAX, stdin);
	printf("String is: %s\n", buf);

	return 0;
}

// The compiler gives shit tons of warnings about how horribly unsafe gets is.

