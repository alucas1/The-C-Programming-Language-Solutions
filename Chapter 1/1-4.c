/* Exercise 1-4. 
	Problem: Write a program to print the corresponding Celsius to Fahrenheit table.

	Author: Alberto Lucas
*/

#include <stdio.h>

int main() {
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; 
	upper = 300;
	step = 20;

	celsius = lower;

	while (celsius <= upper) {
		fahr = (celsius) * (9.0 / 5.0) + 32.0;
		printf("%5.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}