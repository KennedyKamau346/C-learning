/* Ch 4 Project 2 - reverses 3 digit number */
#include <stdio.h>

int main(void)
{
	int num, n1, n2, n3;

	printf("Enter a three-digit number: ");
	scanf("%d", &num);

	n1 = num / 100;
	n2 = num % 100 / 10;
	n3 = num % 100 % 10;

	printf("The reverse is : %d%d%d\n", n3, n2, n1);

	return 0;
}
