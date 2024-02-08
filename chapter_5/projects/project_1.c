#include <stdio.h>

/**
 * main - calculates how many digits a number contains
 * Return: nothing
 */

int main(void)
{
	int digit;

	printf("Enter a number: ");
	scanf("%4d", &digit);

	if (digit >= 0 && digit <= 9)
		printf("The number %d has 1 digits\n", digit);
	else if (digit >= 10 && digit <= 99)
		printf("The number %d has 2 digits\n", digit);
	else if (digit >= 100 && digit <= 999)
		printf("The number %d has 3 digits\n", digit);
	else if (digit >= 1000 && digit <= 9999)
		printf("The number %d has 4 digits\n", digit);

	return (0);
}
