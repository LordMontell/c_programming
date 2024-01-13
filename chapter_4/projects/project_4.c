#include <stdio.h>

/**
 * main - Write a program that reads an integer entered by the
 * user and displays it in octal (base 8)
 * Return: nothing
 */

int main(void)
{
	int user_int;
	int digit1, digit2, digit3, digit4, digit5;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &user_int);

	digit5 = user_int % 8;
	user_int = user_int / 8;

	digit4 = user_int % 8;
	user_int = user_int / 8;

	digit3 = user_int % 8;
	user_int = user_int / 8;

	digit2 = user_int % 8;
	user_int = user_int / 8;

	digit1 = user_int % 8;
	user_int = user_int / 8;

	printf("In octal, your number is: %d%d%d%d%d\n", digit1,
			digit2, digit3, digit4, digit5);

	return (0);
}
