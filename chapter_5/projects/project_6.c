#include <stdio.h>
/**
 * main - checks whether a UPC is valid. After the user enters a UPC
 * Return: nothing
 */

int main(void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum,
	    second_sum, total, cd;

	printf("Enter UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5,
			&j1, &j2, &j3, &j4, &j5, &cd);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	if (cd == (9 - (total - 1) % 10))
		printf("VALID\n");
	else
		printf("INVALID\n");

	return (0);

}
