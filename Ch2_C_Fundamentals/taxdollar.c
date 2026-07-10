/* ask user t enter dollar and cents and displays the amount with 5% tax added */
#include <stdio.h>

int main(void)
{
	float amount, taxed;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	taxed = amount * 105 / 100;

	printf("With tax added: $%.2f\n", taxed);

	return 0;
}
