#include <stdio.h>
#define  TAX (5.0f / 100.0f)

/**
 * main - a program that asks the user to enter a dollars-and-cents
 * amount, then displays the amount with 5% tax added
 * Return: nothing
 */


int main(void)
{
	float amount = 0.0f;
	float total_amount = 0.0f;

	printf("Enter an amount: ");
	scanf("%f", &amount);
	total_amount = amount + (amount * TAX);
	printf("with tax added: %.2f\n", total_amount);

	return (0);
}
