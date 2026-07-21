/* Ch 5 - Project 2
 * A program that changes 24H time then displays in 12H form
 * KennyKamau346 */
#include <stdio.h>

int main(void)
{
	int hour, min;
	char t;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &min);

	if (hour == 00){
		hour = 12;
		t = 'A';
	}
	else if(hour == 12)
		t = 'P';
	else if(hour >= 13){
		hour -= 12;
		t = 'P';
	}
	else
		t = 'A';

	printf("Equivalent 12-hour time: %d:%02d %cM\n", hour, min, t);

	return 0;
}
