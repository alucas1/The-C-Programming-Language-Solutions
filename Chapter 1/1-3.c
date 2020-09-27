/* Exercise 1-3. 
	Problem: Modify the temperature conversion program to print a heading above the table.

	Author: Alberto Lucas
*/

#include <stdio.h>

int main() {
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; 
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Fahr -> Celsius table\n");
	printf("---------------------\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%5.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}