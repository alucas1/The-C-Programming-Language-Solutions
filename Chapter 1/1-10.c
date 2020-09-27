/* Exercise 1-10. 
	Problem: Write a program to copy its input to its output, replacing each string of one or
	more blanks by a single blank.

	Author: Alberto Lucas
*/

#include <stdio.h>

int main() {
	int currentChar = 0;

	while ((currentChar = getchar()) != EOF) {
		if (currentChar == '\t') {
			printf("\\t");
		} else if (currentChar == '\b') {
			printf("\\b");
		} else if (currentChar == '\\') {
			printf("\\\\");
		} else {
			putchar(currentChar);
		}

	}

	return 0;
}