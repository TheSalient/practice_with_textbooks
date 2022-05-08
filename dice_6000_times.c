#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function that print the frquency of each die face.
 *
 * Return: 0 if success.
 */
int main(void)
{
	/*rolled counters*/
	int frequency1 = 0, frequency2 = 0, frequency3 = 0;
	int frequency4 = 0, frequency5 = 0, frequency6 = 0;
	int roll, face; /*to monitor the counter and the die face.*/
	/*looped for 6000*/
	for (roll = 1; roll <= 6000; roll++)
	{
		face = 1 + (rand() % 6); /*random number from 1 to 6.*/

		/*determine face value and increment appropriate counter.*/
		switch (face)
		{
			case 1: /*rolled 1*/
				++frequency1;
				break;

			case 2: /*rolled 2*/
				++frequency2;
				break;

			case 3: /*rolled 3*/
				++frequency3;
				break;

			case 4: /*rolled 4*/
				++frequency4;
				break;

			case 5: /*rolled 5*/
				++frequency5;
				break;

			case 6: /*rolled 6*/
				++frequency6;
				break;
		} /*end switch*/
	} /*end for*/
	/*display results in tabular format*/
	printf("%s%13s\n", "Face", "Frequency");
	printf(" 1%13d\n", frequency1);
	printf(" 2%13d\n", frequency2);
	printf(" 3%13d\n", frequency3);
	printf(" 4%13d\n", frequency4);
	printf(" 5%13d\n", frequency5);
	printf(" 6%13d\n", frequency6);
	return (0); /*indicates successful termination.*/
} /*end main*/
