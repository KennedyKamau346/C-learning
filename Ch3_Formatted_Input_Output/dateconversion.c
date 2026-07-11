/* Programming Project 1- accepts user date in the form mm/dd/yyyy
 * and then displays it in the form yyyymmdd
 */
#include <stdio.h>

int main(void)
{
	int mm, dd, yy;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yy);

	printf("You entered the date %.4d%.2d%.2d\n", yy, mm, dd);

	return 0;
}
