#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char me[20];
	printf("What is your name? ");
	scanf("%s", me);
	printf("Darn glad to meet you, %s!\n", me);

	bool yep = me == &(me[0]);
	//printf("%d\n", yep);
	if (yep == true) {
		printf("true\n");
	}
	else {
		printf("false\n");
	}

	return(0);
}

