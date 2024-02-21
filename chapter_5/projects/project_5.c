#include <stdio.h>

/**
 * main - asks the user to enter the amount of taxable
 * income, then displays the tax due.
 * Return: nothing
 */

int main(void)
{
	float income;
	float tax_due = 0.0f;

	printf("Enter income: ");
	scanf("%f", &income);

	if (income <= 750)
		tax_due = income *  0.01f;
	else if (income <= 2250)
		tax_due = 7.50f + ((income - 750.0f) * 0.02f);
	else if (income <= 3750)
		tax_due = 37.50f + ((income - 2250.00f) * 0.03f);
	else if (income <= 5250)
		tax_due = 82.50f + ((income - 3750.00f) * 0.04f);
	else if (income <= 7000)
		tax_due = 142.50f + ((income - 5250.00f) * 0.05f);
	else if (income > 7000)
		tax_due = 230.00f + ((income - 7000.00f) * 0.06f);

	printf("The tax due is: %.2f\n", tax_due);

	return (0);
}
