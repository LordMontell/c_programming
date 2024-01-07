#include <stdio.h>

/**
 * main - modify project_5.c to use Horner's rule
 * Return: nothing
 */

int main(void)
{
	float x = 0.0f;
	float p_value = 0.0f;

	printf("Enter a value: ");
	scanf("%f", &x);
	p_value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("polynomial value is: %f\n", p_value);

	return (0);
}
