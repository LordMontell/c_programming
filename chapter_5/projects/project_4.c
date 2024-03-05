#include <stdio.h>

/**
 * main - asks the user to enter a wind speed (in knots),then
 * displays the corresponding description
 * Return: (0)
 */

int main(void)
{
	float speed;

	scanf("%d", &speed);

	if (speed < 1)
		printf("Calm\n");
	else if (speed <= 3)
		printf("Light air\n");
	else if (speed <= 27)
		printf("Breeze\n");
	else if (speed <= 47)
		printf("Gale\n");
	else if (speed <= 63)
		printf("Storm\n");
	else if (speed > 63)
		printf("Hurricane\n");

	return (0);
}
