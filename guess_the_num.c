#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void correctness(int i);

/**
 * main - the main function.
 *
 * Return: return 0 for success or other int for otherwise.
 */
int main(void)
{
	int i;
	char ch;

	srand(time(NULL));
	i = 1 + (rand() % 1000);

	correctness(i);

	scanf("%c", &ch);
	if (ch == 'y')
	{
		correctness(i);
	}

	return (0);
}


/**
 * correctness - the function that check if the guess is right.
 * @i: the only parameter.
 */
void correctness(int i)
{
	int j;

	while (j != i)
	{
	printf("I have a number between 1 and 1000.\n");
	printf("can you guess my number?\n");
	printf("please, type your first guess.\n");
	scanf("%d", &j);

	if (j < i)
	{
		printf("Too low. Try again.\n");
	}
	else if (j > i)
	{
		printf("Too high. Try again.\n");
	}
	}

	printf("Excellent! You guessed the number!\n");
	printf("would you like to play again (y or n)\n");
}
