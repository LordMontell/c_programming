#include <stdio.h>

/**
 * main - Write a program that asks the user to enter the numbers from
 * 1 to 16 (in any order) and then displays the numbers in a 4 by 4
 * arrangement, followed by the sums of the rows, columns,and
 * diagonals
 * Return: nothing
 */

int main(void)
{
	int r1c1, r1c2, r1c3, r1c4;
	int r2c1, r2c2, r2c3, r2c4;
	int r3c1, r3c2, r3c3, r3c4;
	int r4c1, r4c2, r4c3, r4c4;
	int row1, row2, row3, row4;
	int column1, column2, column3, column4;
	int diagonal1, diagonal2;

	printf("Enter the numbers from 1 to 16 in any order: \n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
		&r1c1, &r1c2, &r1c3, &r1c4, &r2c1, &r2c2, &r2c3,
		&r2c4, &r3c1, &r3c2, &r3c3, &r3c4, &r4c1,
		&r4c2, &r4c3, &r4c4);

	printf("\n%2d %2d %2d %2d\n", r1c1, r1c2, r1c3, r1c4);
	printf("%2d %2d %2d %2d\n", r2c1, r2c2, r2c3, r2c4);
	printf("%2d %2d %2d %2d\n", r3c1, r3c2, r3c3, r3c4);
	printf("%2d %2d %2d %2d\n", r4c1, r4c2, r4c3, r4c4);

	row1 = r1c1 + r1c2 + r1c3 + r1c4;
	row2 = r2c1 + r2c2 + r2c3 + r2c4;
	row3 = r3c1 + r3c2 + r3c3 + r3c4;
	row4 = r4c1 + r4c2 + r4c3 + r4c4;

	column1 = r1c1 + r2c1 + r3c1 + r4c1;
	column2 = r1c2 + r2c2 + r3c2 + r4c2;
	column3 = r1c3 + r2c3 + r3c3 + r4c3;
	column4 = r1c4 + r2c4 + r3c4 + r4c4;

	diagonal1 = r1c1 + r2c2 + r3c3 + r4c4;
	diagonal2 = r1c4 + r2c3 + r3c2 + r4c1;

	printf("\nRow sums: %d %d %d %d\n", row1, row2, row3, row4);
	printf("Column sums: %d %d %d %d\n", column1, column2,
		column3, column4);
	printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);

	return (0);
}
