#include <stdio.h>

int main()
{
	// Note that the first argument to printf is a
	// format string which can format the text,
	// provided in the subsequent arguments, but
	// itself can also contain text to display.
	// The format string can contain conversion
	// specifications, which consist of a percent
	// sign followed by a character which represents
	// a data type.

	// %s means a string. A number inserted specifies
	// a width: %8s means a string 8 characters wide.
	// A minus sign means left justify: %-8s

	// Print out 15 numerals.
	printf("123456789012345\n");
	// Right justify the word 'right' within
	// a space of 15 characters.
	printf("%15s", "right");
	// Then print a newline in a separate printf statement.
	printf("\n");

	printf("123456789012345\n");
	// Notice if we include the newline character within
	// the string we're wanting to right justify, the text
	// will have the appearance of not being justified correctly.
	// This is because the newline character is counted in
	// that space of 15 characters. So if we want to justify
	// text correctly, we must make the printing of the newline
	// a separate printf statement.
	printf("%15s", "right\n");
	printf("%-15s", "left\n");

	// I find that I need this at the end of my programs to
	// keep my console window from being in a funky state.
	printf("\n");
	return(0);
}

