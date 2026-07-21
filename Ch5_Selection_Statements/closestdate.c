/* Ch 5 - Project 9
 * Enter 2 dates and it will calculate which is earlier
 * Kennykamau346 - I_WANT_TO_C 
 * */
#include <stdio.h>

int main(void)
{
	int mm1, mm2, dd1, dd2, yy1, yy2;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm1, &dd1, &yy1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm2, &dd2, &yy1);

	if (yy1 < yy2)
		printf("%d/%d/%d is earlier than %d/%d/%d\n", mm1, dd1, yy1, mm2, dd2, yy2);
	else if (yy2 < yy1)
		printf("%d/%d/%d is earlier than %d/%d/%d\n", mm2, dd2, yy2, mm1, dd1, yy1);
	else{
		if (mm1 < mm2)
			printf("%d/%d/%d is earlier than %d/%d/%d\n", mm1, dd1, yy1, mm2, dd2, yy2);
		else if (mm2 < mm1)
			printf("%d/%d/%d is earlier than %d/%d/%d\n", mm2, dd2, yy2, mm1, dd1, yy1);
		else{
			if (dd1 < dd2)
				printf("%d/%d/%d is earlier than %d/%d/%d\n", mm1, dd1, yy1, mm2, dd2, yy2);
			else if (dd2 < dd1)
				printf("%d/%d/%d is earlier than %d/%d/%d\n", mm2, dd2, yy2, mm1, dd1, yy1);
			else
				printf("The dates are equal\n");
		}
	}
	return 0;
}
