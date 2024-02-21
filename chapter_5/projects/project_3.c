#include <stdio.h>

/**
 * main - Ask the user to enter the number of shares and the price per share,
 * compute and display the commission charged by origional and rival broker,
 * Return: nothing
 */

int main(void)
{
	float original_commission, rival_commission;
	float price_per_share, value;
	int number_of_shares;

	original_commission = rival_commission = 0.00f;

	printf("Enter number of shares: ");
	scanf("%d", &number_of_shares);
	printf("Enter price per share: ");
	scanf("%f", &price_per_share);

	value = number_of_shares * price_per_share;

	/** Original Commission **/
	if (value < 2500.00f)
		original_commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		original_commission = 56.00f + .0066f * value;
	else if (value < 20000.00f)
		original_commission = 76.00f + .0034f * value;
	else if (value < 50000.00f)
		original_commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		original_commission = 155.00f + .0011f * value;
	else
		original_commission = 255.00f + .0009f * value;

	if (original_commission < 39.00f)
		original_commission = 39.00f;

	/** Rival Commission **/
	if (number_of_shares < 2000)
		rival_commission = 33 + (0.03f * number_of_shares);
	else if (number_of_shares >= 2000)
		rival_commission = 33 + (0.02f * number_of_shares);


	printf("Original Commission: $%.2f\n", original_commission);
	printf("Rival's Commission: $%.2f\n", rival_commission);

	return (0);
}
