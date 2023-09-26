#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main()
{
	int myint;
	long mylong;

	setlocale(LC_NUMERIC, "");

	printf("INT_MAX and LONG_MAX...\n");
	printf("%+.19d\n",  INT_MAX);
	printf("%+.19ld\n", LONG_MAX);
	printf("\n");

	myint  = 2147483647;
	mylong = 9223372036854775807;

	printf("Assign the maximum value to actual variables...\n");
	printf("%+.19d\n",  myint);
	printf("%+.19ld\n", mylong);

	printf("\n");
	
	myint  = 2147483648;
	mylong = 9223372036854775808;

	printf("Increment to the maximum value plus one...\n");
	printf("%+.19d\n",  myint);
	printf("%+.19ld\n", mylong);
	
	printf("\n");
	
	myint  = 2147483649;
	mylong = 9223372036854775809;

	printf("Increment to the maximum value plus two...\n");
	printf("%+.19d\n",  myint);
	printf("%+.19ld\n", mylong);
	
	return(0);
}

// I tried this program with this number and it worked.
//  2,147,483,647

// I incremented it to...
//  2,147,483,648
// ...and the answer came back as a negative.
// -2,147,483,648

// I incremented it again to...
//  2,147,483,649
// ...and the answer came back as a negative.
// -2,147,483,647

//  2,147,483,650
// comes back as...
// -2,147,483,646



