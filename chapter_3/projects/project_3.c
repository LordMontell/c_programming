#include <stdio.h>

/**
 * main -  a program that breaks down an ISBN entered by
 * the user:
 * Return: nothing
 */

int main(void)
{
	int gsi_prefix;
	int group_id;
	int pub_code;
	int item_no;
	int chk_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_id,
		&pub_code, &item_no, &chk_digit);
	printf("GSI prefix: %d\n", gsi_prefix);
	printf("Group identifier: %d\n", group_id);
	printf("Publisher code: %d\n", pub_code);
	printf("Item number: %d\n", item_no);
	printf("Check digit: %d\n", chk_digit);

	return (0);
}
