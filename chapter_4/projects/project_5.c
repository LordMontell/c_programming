#include <stdio.h>

/**
 * main - Rewrite the upc.c program of Section 4.1 so that the user enters
 * 11 digits at one time, instead of entering one digit, then five digits,
 * and then another five digits.
 * Return: nothing
 */

int main(void)
{
	int upc, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11,
		check_digit, first_sum, second_sum, total;

	printf("Enter the first 11 digits of a UPC: ");
	scanf("%d", &upc);

	d11 = upc % 10;
	upc = upc / 10;

	d10 = upc % 10;
	upc = upc / 10;

	d9 = upc % 10;
	upc = upc / 10;

	d8 = upc % 10;
	upc = upc / 10;

	d7 = upc % 10;
	upc = upc / 10;

	d6 = upc % 10;
	upc = upc / 10;

	d5 = upc % 10;
	upc = upc / 10;

	d4 = upc % 10;
	upc = upc / 10;

	d3 = upc % 10;
	upc = upc / 10;

	d2 = upc % 10;
	upc = upc / 10;

	d1 = upc % 10;
	
	first_sum = d1 + d3 + d5 + d7 + d9 + d11;
	second_sum = d2 + d4 + d6 + d8 + d10;

	total = (first_sum * 3) + second_sum;

	check_digit = 9 - (total - 1) % 10;

	printf("Check digit: %d\n", check_digit);
}
