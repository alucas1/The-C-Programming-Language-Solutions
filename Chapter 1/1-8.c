/* Exercise 1-8. 
	Problem: Write a program to count blanks, tabs, and newlines.

	Author: Alberto Lucas
*/

#include <stdio.h>

int main() {
	int blanks = 0;
	int newLines = 0;
	int tabs = 0;
	int character;

	while ((character = getchar()) != EOF) {
		if (character == '\n') {
			++newLines;
		} else if (character == ' ') {
			++blanks;
		} else if (character == '\t') {
			++tabs;
		}	
	}

	printf("Blanks: %d\nNew Lines: %d\ntabs: %d\n", blanks, newLines, tabs);

	return 0;
}