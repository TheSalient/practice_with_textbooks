#include <stdio.h>
#define SIZE 10

int main(void)
{
	int size;
	int i, j;
	int b[SIZE] = {2, 5, 3, 9, 8, 6, 5, 14, 40, 11};
	
	printf("The numbers before the sorting. \n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", b[i]);
	}
	for (j = 1; j < SIZE; j++)
	{
		for (i = 0; i < SIZE - 1; i++)
		{
			if (b[i] < b[i + 1])
			{
				size = b[i];
			
				b[i] = b[i + 1];

				b[i + 1] = size;
			}
		}
	}
	printf("\nThe numbers after the sorting. \n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", b[i]);
	}
	printf("\n");
	return (0);
}
