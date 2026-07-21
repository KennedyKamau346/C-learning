/* Ch 5 - Project 11
 * Enter a 2 digit number and it will print the english word ffor the number using switch
 * KennyKamau346 - I WANT TO C
 * */
#include <stdio.h>

int main(void)
{
	int num, d1, d2;

	printf("Enter a two-digit number: ");
	scanf("%d" , &num);

	switch (num / 10){
		case 9:
			printf("You entered the number ninety-");
			break;
		case 8:
			printf("You enterd the number eighty-");
			break;
		case 7:
			printf("You enterd the number seventy-");
			break;
		case 6:
			printf("You enterd the number sixty-");
			break;
		case 5:
			printf("You ennterd the number fifty-");
			break;
		case 4:
			printf("You enterd the number forty-");
			break;
		case 3:
			printf("You enterd the number thirty-");
			break;
		case 2:
			printf("You enterd the number twenty-");
			break;
		case 0:
			printf("You enterd the number ");
			break;
		case 1:
			switch (num % 10){
				case 0: 
					printf("You entered the number ten\n");
					break;
				case 1:
					printf("You enterd the number eleven\n");
					break;
				case 2:
					printf("You enterd the number twelve\n");
					break;
				case 3:
					printf("You entered the number thirteen\n");
					break;
				case 4:
					printf("You enterd the number fourteen\n");
					break;
				case 5:
					printf("You enterd the number fifteeen\n");
					break;
				case 6:
					printf("You enterd the number sixteen\n");
					break;
				case 7:
					printf("You enterd the number seventeen\n");
					break;
				case 8:
					printf("You enterd the number eighteen\n");
					break;
				case 9:
					printf("You enterd the number nineteen\n");
					break;
			}
	}

		if (num / 10 != 1) {
			switch (num % 10 ) {
				case 0:
					printf("\n");
					break;
				case 1:
					printf("one\n");
					break;
				case 2:
					printf("two\n");
					break;
				case 3:
					printf("three\n");
					break;
				case 4:
					printf("four\n");
					break;
				case 5:
					printf("five\n");
					break;
				case 6:
					printf("six\n");
					break;
				case 7:
					printf("seven\n");
					break;
				case 8:
					printf("eight\n");
					break;
				case 9:
					printf("nine\n");
					break;
			}
		}

		return 0;
}
