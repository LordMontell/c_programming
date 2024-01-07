#include <stdio.h>

/**
 * main - declares and prints uninitialized variables
 * Return: zero when run successful
 */

int main(void)
{
	int var1;
	int var2;
	int var3;
	float var4;
	float var5;
	float var6;

	printf("int var1: %d\nint var2: %d\nint var3: %d\nfloat var4:
		+ %f\nfloat var5: %f\nfloat var6: %f\n ",
		var1, var2, var3, var4, var5, var6);
	return (0);
}
