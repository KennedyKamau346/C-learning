/* Ch 5 - Project 7
 * Finds largest and smallest of 4 integers  enterd by user udsing if statements 
 * KennyKamau346 */
#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, larger1, larger2, largest, smaller1, smaller2, smallest;
	
	printf("Enter four integers: ");
	scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

	largest = 0;
	smallest = 0;

	// Compare the first pair
	if (n1 > n2){
		larger1 = n1;
		smaller1 = n2;
	} else{
		larger1 = n2;
		smaller1 = n1;
	}

	// Compare the second pair
	if (n3 > n4){
		larger2 = n3;
		smaller2 = n4;
	} else{
		larger2 = n4;
		smaller2 = n3;
	}

	// Find the largest
	if (larger1 > larger2)
		largest = larger1;
	else
		largest = larger2;

	// Find the smallest
	if (smaller1 < smaller2)
		smallest = smaller1;
	else
		smallest = smaller2;

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	return 0;
}
