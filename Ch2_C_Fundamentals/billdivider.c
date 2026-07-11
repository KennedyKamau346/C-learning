/* ask the user to enter a dollar amount and divide it into smallest number of 20, 10, 5, and 1 bills */
#include <stdio.h>

int main(void)
{
	int amount, bill_20, bill_10, bill_5, bill_1;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	bill_20 = amount / 20;
	amount = amount % 20;
	bill_10 = amount / 10;
	amount = amount % 10;
	bill_5 = amount / 5;
	amount = amount % 5;
	bill_1 = amount;

	printf("$20 bills: %d\n", bill_20);
	printf("$10 bills: %d\n", bill_10);
	printf(" $5 bills: %d\n", bill_5);
	printf(" $1 bills: %d\n", bill_1);

	return 0;
}	
