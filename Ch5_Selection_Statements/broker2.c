/* Ch 5 - Project 3 MOdify broker.c 
 * Calculates a broler's commisioin 
 * KennyKamau346 */
#include <stdio.h>

int main(void)
{
	float commission, share, price_share, rival_commission;

	printf("Enter the number of shares: ");
	scanf("%f", &share);
	printf("Enter price per share: ");
	scanf("%f", &price_share);

	if (share < 2500.00f)
		commission = 30.00f + .017f * share;
	else if (share < 6250.00f)
		commission = 56.00f + .0066f * share;
	else if (share < 20000.00f)
		commission = 76.00f + .0034f * share;
	else if (share < 50000.00f)
		commission = 100.00f + .0022f * share;
	else if (share < 500000.00f)
		commission = 155.00f + .0011f * share;
	else
		commission = 255.00f + .0009f * share;

	if (commission < 39.00f)
		commission = 39.00f;

	if (share < 2000.00f)
		rival_commission = 33.00f + .003 * share;
	else if (share >= 2000.00f)
		rival_commission = 33.00f + .002 * share;

	printf("Commission: $%.2f\trival commission: $%.2f\n", commission, rival_commission);

	return 0;
}	
