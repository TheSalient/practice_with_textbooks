#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function where the randomization is taking place.
 *
 * Return: 0 if success or something else otherwise.
 */
int main(void)
{
	int i; /*The counter*/
	/*loop 20 times*/
	for (i = 1; i <= 20; i++)
	{
		/*pick random number from 1 to 6 and output it*/
		printf("%10d", 1 + (rand() % 6));

		/*if counter is divisible by 5, begin new line of output.*/
		if (i % 5 == 0)
		{
			printf("\n");
		} /*end if*/
	} /*end for*/

	return (0); /*indicates successful termination*/
} /*end main*/
