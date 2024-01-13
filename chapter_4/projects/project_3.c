#include <stdio.h>

/**
 * main - Rewrite the program in Programming Project 2 so that it prints the
 * reversal of a three-digit number without using arithmetic to split the
 * number into digits
 * Return: nothing
 */

int main(void)
{
	int num1, num2, num3;

	printf("Enter a three-digit number: ");
	scanf("%d%d%d", &num1, &num2, &num3);

	printf("The reversal is: %d%d%d\n", num3, num2, num1);

	return (0);
}
