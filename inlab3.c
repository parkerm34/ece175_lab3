/*	Author: Parker Mathewson
	Date: 2/8/12
	Program: This is the mastermind game program. we are to read 4 answers from a .dat file and compare guessed answers with the file.
*/

#include<stdio.h>

int main(void)
{
	char ans1=0,ans2=0,ans3=0,ans4=0;
	char guess1=0,guess2=0,guess3=0,guess4=0;
	FILE *inp;
	int cor=0;

	inp = fopen("answer.dat","r");

	fscanf(inp,"%c",&ans1);
//	fflush(stdin);
	fscanf(inp," %c",&ans2);
//	fflush(stdin);
	fscanf(inp," %c",&ans3);
//	fflush(stdin);
	fscanf(inp," %c",&ans4);
	printf("%c%c%c%c\n", ans1, ans2, ans3, ans4);
	printf("\n\nI have 4 colors in a specific order.\nThe colors are red (r) blue (b) green (g) and yellow (y).\n");
	printf("Guess the order of the colors using r b g and y as the guesses.\n\n");

	while(cor != 4)						//starts loop
	{
		cor = 0;

		fflush(stdin);
		printf("Guess the first position: ");
		scanf("%c",&guess1);

		fflush(stdin);
		printf("\nGuess the second position: ");
		scanf("%c",&guess2);

		fflush(stdin);
		printf("\nGuess the third position: ");
		scanf("%c",&guess3);

		fflush(stdin);
		printf("\nGuess the fourth position: ");
		scanf("%c",&guess4);

		if(guess1 == ans1)
			cor=cor++;
		if(guess2 == ans2)					//if block
			cor=cor++;
		if(guess3 == ans3)
			cor=cor++;
		if(guess4 == ans4)
			cor=cor++;
		switch(cor)
		{
			case 0:
				printf("\n\nThere are 0 correct in your guess.\n");
				break;

			case 1:								//case statements
				printf("There is 1 correct in your guess.\n");
				break;

			case 2:
				printf("There is 2 correct in your guess! You are almost there!\n");
				break;

			case 3:
				printf("There are 3 correct in your guess! Just one left...\n");
				break;

			case 4:
				printf("These are all correct!\n");
				break;
		}

	}

	printf("You win!\n");
									//bi-winning!
	return (0);
}
