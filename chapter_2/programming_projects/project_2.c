#include <stdio.h>
#define PI	3.14159f
/**
  * main - calculates a volume of a sphere
  * Return: nothing
  */

int main(void)
{
	float r = 10.0f;
	float v = 0;

	v = (4.0f / 3.0f) * PI * r * r * r;
	printf("Volume of sphere is: %f\n", v);

	return (0);
}
