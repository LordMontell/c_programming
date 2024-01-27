#include <stdio.h>

/**
 * main - e a program that asks the user to enter a
 * U.S. dollar amount and then shows how to pay that
 * amount using the smallest number of $20, $10, $5,
 *  and $1 bills
 *  Return: nothing
 */

int main(void)
{
	int user_amount = 0;
	int small_amount = 0;

	printf("Enter a dollar amount: \n");
	scanf("%d", &user_amount);

	small_amount = user_amount / 20;
	printf("$20 bills: %d\n", small_amount);
	user_amount = user_amount - (20 * small_amount);

	small_amount = user_amount / 10;
	printf("$10 bills: %d\n", small_amount);
	user_amount = user_amount - (10 * small_amount);

	small_amount = user_amount / 5;
	printf(" $5 bills: %d\n", small_amount);
	user_amount = user_amount - (5 * small_amount);

	small_amount = user_amount / 1;
	printf(" $1 bills: %d\n", small_amount);

	return (0);
}

