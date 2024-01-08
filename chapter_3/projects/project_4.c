#include <stdio.h>

/**
 * main -  a program that prompts the user to enter a telephone
 * number in the form (xxx) xxx-xxxx and then displays the
 * number in the form xxx.xxx.xxx
 * Return: nothing
 */

int main(void)
{
	int set_1;
	int set_2;
	int set_3;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &set_1, &set_2, &set_3);
	printf("You entered : %.3d.%.3d.%.4d\n",
		set_1, set_2, set_3);

	return (0);
}
