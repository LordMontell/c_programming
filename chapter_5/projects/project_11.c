#include <stdio.h>

/**
 * main -asks the user for a two-digit number, then prints
 * the English word for the number
 * Return: nothing
 */

int main(void)
{
	int n;

	printf("Enter a two-digit number:");
	scanf("%2d", &n);

	switch (n / 10)
	{
		case 1:
			switch (n % 10)
			{
				case 0:
					printf("ten\n");
					break;
				case 1:
					printf("eleven\n");
					break;
				case 2:
					printf("twelve\n");
					break;
				case 3:
					printf("thirteen\n");
					break;
				case 4:
					printf("fourteen\n");
					break;
				case 5:
					printf("fifteen\n");
					break;
				case 6:
					printf("sixteen\n");
					break;
				case 7:
					printf("seventeen\n");
					break;
				case 8:
					printf("eighteen\n");
					break;
				case 9:
					printf("nineteen\n");
					break;

			}
			return (0);
			break;
		case 2:
			printf("You entered the number twenty");
			break;
		case 3:
			printf("You entered the number thirty");
			break;
		case 4:
			printf("You entered the number fourty");
			break;
		case 5:
			printf("You entered the number fifty");
			break;
		case 6:
			printf("You entered the number sixty");
			break;
		case 7:
			printf("You entered the number seventy");
			break;
		case 8:
			printf("You entered the number eighty");
			break;
		case 9:
			printf("You entered the number ninety");
			break;
		default:
			break;
	}

	switch (n % 10)
	{
		case 0:
			printf("\n");
			break;
		case 1:
			printf("-one\n");
			break;
		case 2:
			printf("-two\n");
			break;
		case 3:
			printf("-three\n");
			break;
		case 4:
			printf("-four\n");
			break;
		case 5:
			printf("-five\n");
			break;
		case 6:
			printf("-six\n");
			break;
		case 7:
			printf("-seven\n");
			break;
		case 8:
			printf("-eight\n");
			break;
		case 9:
			printf("-nine\n");
			break;
	}

	return (0);
}
