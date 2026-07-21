/* CH 5 - Project 5
 * User to enter taxable income and it will calculate tax due
 * KennyKamau */
#include <stdio.h>

int main(void)
{
	float income, tax;

	printf("Enter the amount of taxable income: ");
	scanf("%f", &income);

	if (income < 750.00f)
		tax = .001 * income;
	else if (income <= 2250.00f)
		tax = 7.50f + (.002 * (income - 750.00f));
	else if (income <= 3750.00f)
		tax = 37.50f + (.003 * (income - 2250.00f));
	else if (income <= 5250.00f)
		tax = 82.50f + (.004 * (income - 3750.00f));
	else if (income <= 7000.00f)
		tax = 142.50f + (.005 * (income - 5250.00f));
	else
		tax = 230.00f + (.006 * (income - 7000.00f));

	printf("Tax due: $%.2f\n", tax);

	return 0;
}
