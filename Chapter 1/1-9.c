/* Exercise 1-9. 
	Problem: Write a program to copy its input to its output, replacing each string of one or
	more blanks by a single blank.

	Author: Alberto Lucas
*/

#include <stdio.h>

int main() {
	int currentChar = 0;
	int previousChar = "";

	while ((currentChar = getchar()) != EOF) {
		if (currentChar == ' ') {
			if (previousChar == ' ') {
				;
			} else {
				putchar(currentChar);
				previousChar = currentChar;
			}
		} else {
			putchar(currentChar);
			previousChar = currentChar;
		}
	}

	return 0;
}