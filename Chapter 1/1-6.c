/* Exercsise 1-6. 
	Problem: Verify that the expression getchar() != EOF is 0 or 1.

	Author: Alberto Lucas
*/

#include <stdio.h>

int main() {

	printf("Enter a character: ");
	printf("\"getchar() != EOF\" returns %d\n", getchar() != EOF);

	return 0;
}