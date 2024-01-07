#include <stdio.h>

/**
 * main -  program that accepts a date from the user in the
 * form mm/dd/yyyy and then displays it in the form yyyymmdd
 * Return: nothing
 */

int main(void)
{
	int month;
	int year;
	int day;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("You entered the date %d%.2d%d\n", year, month, day);

	return (0);
}
