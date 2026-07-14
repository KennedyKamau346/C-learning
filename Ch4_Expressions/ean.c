/* ch 4 project 6 - european article number (EAN) */
#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, first_sum, sec_sum, total;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
			&n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

	first_sum = n1 + n3 + n5 + n7 + n9 + n11;
	sec_sum = n2 + n4 + n6 + n8 + n10 + n12;
	total = first_sum + 3 * sec_sum;
	
	printf("Check digit: %d\n", 9 - (total - 1) % 10);

	return 0;	
}
