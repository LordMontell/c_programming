#include <stdio.h>
#define PI 3.14159f

/**
 * main - calculates volume of a sphere and take user input
 * Return: nothing
 */

int main(void)
{
	float r = 0.0;
	float v = 0.0;

	scanf("%f", &r);
	v = (4.0f / 3.0f) * PI * r * r * r;
	printf("Volume of sphere is: %f\n", v);

	return (0);
}
