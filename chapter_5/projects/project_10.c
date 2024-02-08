#include <stdio.h>

/**
 * main - converts a numerical grade into a letter grade
 * Return: nothing
 */

int main(void)
{
	int grade;

	printf("Enter numerical grade:");
	scanf("%d", &grade);

	if (grade >= 0 && grade <= 100)
	{
		switch (grade / 10)
		{
			case 10: case 9:
				printf("Letter grade: A\n");
				break;
			case 8:
				printf("Letter grade: B\n");
				break;
			case 7:
				printf("Letter grade: C\n");
				break;
			case 6:
				printf("Letter grade: D\n");
				break;
			case 5: case 4: case 3: case 2: case 1: case 0:
				printf("Letter grade: F\n");
				break;
			default:
				printf("grade is larger than 100 or less than 0\n");
		}
	}
	else
	{
		printf("grade is larger than 100 or less than 0\n");
	}

	return (0);
}
