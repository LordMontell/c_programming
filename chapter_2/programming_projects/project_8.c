#include <stdio.h>
#define  INTEREST	6.0

/**
 * main - a program that calculates the remaining
 * balance on a loan after the first, second, and
 * third monthly payments
 * Return: nothing
 */

int main(void)
{
	float amount = 0.0f;
	float taxed_amount = 0.0f;
	float remaining_amount = 0.0f;
	float interest = 0.0f;
	float converted_interest = 0.0f;
	float payment = 0.0f;
	float balance = 0.0f;

	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter amount payment: ");
	scanf("%f", &payment);

	converted_interest = (interest / 100) / 12;
	taxed_amount = amount + (amount * converted_interest);
	remaining_amount = taxed_amount - payment;
	printf("Balance remaining after first payment: %.2f\n", remaining_amount);

	taxed_amount = remaining_amount + (remaining_amount * converted_interest);
	remaining_amount = taxed_amount - payment;
	printf("Balance remaining after second payment: %.2f\n", remaining_amount);

	taxed_amount = remaining_amount + (remaining_amount * converted_interest);
	remaining_amount = taxed_amount - payment;
	printf("Balance remaining after third payment: %.2f\n", remaining_amount);

	return (0);
}
