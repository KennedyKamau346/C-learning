/* Ch 5 - Project 1
 * A program that calculates how many digits a number contains using if statements 
 * Assumptions are the number has no more than 4 digits 
 * KennyKamau346 */
#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if(num >= 0 && num <= 9)
		printf("The number %d has 1 digit\n", num);
	else if(num <= 99)
		printf("The number %d has 2 digits\n", num);
	else if(num <= 999)
		printf("The number %d has 3 digits\n", num);
	else
		printf("THe number %d has 4 digits\n", num);

	return 0;
}
