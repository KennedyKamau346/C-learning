/* Programming project 2 - * Write a program that formats product information entered by    the user. A session with the
 p rogram should look li*ke this:
 Enter item number: 583
 Enter unit price: 13.5
 Enter purchase date (mm/dd/yyyy): 10/24/2010
 Item Unit Purchase
 Price Date
 583 $ 13.50 10/24/2010 */
#include <stdio.h>

int main(void)
{
	int item, mm, dd, yy;
	float price;

	printf("Enter item number: ");
	scanf("%d", &item);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yy);

	printf("\nItem\tUnit\t\tPurchase\n\tPrice\t\tDate\n");
	printf("%-7d\t$%7.2f\t%.2d/%.2d/%4d\n", item, price, mm, dd, yy);

	return 0;
}
