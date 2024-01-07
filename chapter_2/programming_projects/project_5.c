#include <stdio.h>

/**
 * main - program that takes user input and
 * computes a polynomial
 * Return: nothing
 */

int main(void)
{
	float x = 0.0f;
	float p_value = 0.0f;

	printf("Enter a value: ");
	scanf("%f", &x);
	p_value = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x
		 * x * x) - (x * x) + (7 * x) - 6;
	printf("polynomial value is: %f\n", p_value);

	return (0);
}

