/* calculate remaining balance on a loan after 1st, 2nd, 3rd monthly payments */
#include <stdio.h>

int main(void)
{
	float amount, rate, payment, monthly_rate;

	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	monthly_rate = rate / 100 / 12;
	amount = amount - payment + (amount * monthly_rate);
	printf("Balance remaining after first payment: $%.2f\n", amount);
	amount = amount - payment + (amount * monthly_rate);
	printf("Balance remaining after second payment: $%.2f\n", amount);
	amount = amount - payment + (amount * monthly_rate);
	printf("Balance remaining after third payment: $%.2f\n", amount);

	return 0;
}
