#include <stdio.h>

/**
 * main - a program that formats product information entered by the user
 * Return: nothing
 */

int main(void)
{
	int item_no;
	float unit_price;
	int month;
	int day;
	int year;

	printf("Enter item number: ");
	scanf("%d", &item_no);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tpurchase\n");
	printf("\t\tprice");
	printf("\t\tdate\n");

	printf("%d\t\t$%7.2f\t%d/%d/%d\n", item_no, unit_price, month, day, year);
}
