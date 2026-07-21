/* Ch 5 - Project 10
 * Converts a numerical grade into a letter grade ising switch
 * KennyKamau - I WANT TO C
 * */
#include <stdio.h>

int main(void)
{
	int score;
	char grade;

	printf("Enter numerical grade: ");
	scanf("%d", &score);

	switch (score/10){
		case 9: grade = 'A'; break;
		case 8: grade = 'B'; break;
		case 7: grade = 'C'; break;
		case 6: grade = 'D'; break;
		case 5: grade = 'F'; break;
		case 4: grade = 'F'; break;
		case 3: grade = 'F'; break;
		case 2: grade = 'F'; break;
		case 1: grade = 'F'; break;
		case 0: grade = 'F'; break;
		default : printf("Error\n"); break;
	}

	printf("Letter grade: %c\n", grade);

	return 0;
}

