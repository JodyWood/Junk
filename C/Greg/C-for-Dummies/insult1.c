#include <stdio.h>
#include <string.h>
#define MAX 20

int main(void)
{
	char jerk[MAX];

	printf("Name of some jerk you know: ");
	fgets(jerk, MAX, stdin); // ¹
	jerk[strcspn(jerk, "\n")] = 0; // ²
	printf("Yeah, I think %s is a jerk too.\n", jerk);
	puts("I guess we're both bad people."); // ³
}

// 1. While scanf can read both text and numbers, it's clunky
//    when reading text for just that reason.
//
//    So we're using fgets instead.
//    The book uses gets (get stdin), but it's deprecated now.

// 2. fgets gives us a string with a terminating newline character,
//    but we want to insert the string without a newline.
//    We can use strcspn to get rid of it.
//
//    We can also use this if the terminating character is a
//    carriage return character followed by a linefeed character
//    as Windows is fond of doing.
//    buffer[strcspn(buffer, "\r\n")] = 0;
//    works for LF, CR, CRLF, LFCR, ...
//
//    This page describes getting rid of the newline...
//    https://stackoverflow.com/questions/2693776/removing-trailing-newline-character-from-fgets-input

// 3. puts understands escape sequences, but you don't need to put a \n
//    at the end of the text string because puts always puts one in.
//    If you don't want the newline character, you should use printf.



