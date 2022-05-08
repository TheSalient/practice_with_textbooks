#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*enumeration constants represent game status*/
enum Status
{CONTINUE, WON, LOST};

int rollDice(void); /*function prototype*/

/* function main begins program execution*/
int main(void)
{
	int sum,/*sum of rolled dice.*/ myPoint; /*point earned*/

	enum Status gameStatus; /*can contain CONTINUE, WON, or LOST */

	/*randomize random number generator using current time*/
	srand(time(NULL));

	sum = rollDice(); /*first roll of the dice*/

	/*determine game status based on sum of dice*/
	switch (sum)
	{
		/*win on first roll*/
		case 7:
		case 11:
			gameStatus = WON;
			break;

		/*lose on first roll*/
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;

		/*remember point*/
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point is %d\n", myPoint);
			break; /*optional*/
	} /*end of switch*/

	/*while game not complete*/
	while (gameStatus == CONTINUE)
	{
		sum = rollDice(); /*roll dice again*/

		/*determine game status*/
		if (sum == myPoint)
		{
			gameStatus = WON;
		} /*end if*/
		else
		{
			if (sum == 7)
			{
				gameStatus = LOST;
			} /*end if*/
		} /*end else*/
	} /*end while*/

	/*display won or lost message*/
	if (gameStatus == WON)
	{
		printf("Player wins\n");
	}
	else
	{
		printf("Player losses\n");
	}
	return (0);
} /*end main*/

/**
 * rollDice - the function that return the sum of dice.
 *
 * Return: return workSum.
 */
int rollDice(void)
{
	int die1;
	int die2;
	int workSum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;

	printf("Player rolled %d + %d = %d\n", die1, die2, workSum);

	return (workSum);
} /*end function rollDice*/
