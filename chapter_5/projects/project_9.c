#include <stdio.h>

/**
 * main - prompts the user to enter two dates and then
 * indicates which date comes earlier on the calendar
 * Return: nothing
 */

int main(void)
{
	int day1, month1, year1;
	int day2, month2, year2;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%2d/%2d/%4d", &day1, &month1, &year1);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%2d/%2d/%4d", &day2, &month2, &year2);

	if (year1 < year2)
	{
		printf("%d/%d/%d is earlier than %d/%d/%d\n", day1,
				month1, year1, day2, month2, year2);
	} else if (year2 < year1)
	{
		printf("%d/%d/%d is earlier than %d/%d/%d\n", day2,
				month2, year2, day1, month1, year1);
	} else if (year1 == year2)
	{
		if (month1 < month2)
		{
			printf("%d/%d/%d is earlier than %d/%d/%d\n", day1,
				month1, year1, day2, month2, year2);
		} else if (month2 < month1)
		{
			printf("%d/%d/%d is earlier than %d/%d/%d\n", day2,
					month2, year2, day1, month1, year1);
		} else if (month1 == month2)
		{
			if (day1 < day2)
			{
				printf("%d/%d/%d is earlier than %d/%d/%d\n", day1,
					month1, year1, day2, month2, year2);
			} else if (day2 < day1)
			{
				printf("%d/%d/%d is earlier than %d/%d/%d\n", day2,
						month2, year2, day1, month1, year1);
			} else if (day1 == day2)
			{
				printf("%d/%d/%d is the same date as %d/%d/%d\n", day1,
						month1, year1, day2, month2, year2);
			}
		}
	}

	return (0);
}
