#include <stdio.h>

/**
 * main -  a program that asks the user for a 24-hour time, then
 * displays the time in 12-hour form
 * Return: nothing
 */

int main(void)
{
	int minutes, seconds;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &minutes, &seconds);

	if (minutes <= 60 && seconds <= 60)
	{
		switch (minutes)
		{
			case 1: case 2: case 3: case 4: case 5:
			case 6: case 7: case 8: case 9: case 10:
			case 11: case 12:
				printf("Equivalent 12-hour time: %2d:%.2d AM\n", minutes, seconds);
				break;
			case 13: case 14: case 15: case 16: case 17:
			case 18: case 19: case 20: case 21: case 22:
			case 23:
				printf("Equivalent 12-hour time: %2d:%.2d PM\n", minutes - 12, seconds);
				break;
		}
	}

	return (0);
}
