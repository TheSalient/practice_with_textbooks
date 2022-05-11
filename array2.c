#include <stdio.h>
#define NUM 30

int main(void)
{
	int Graph[NUM] = {20, 3, 12, 11, 24, 45, 23, 2, 3, 4, 5, 53, 7, 1, 17, 27, 37, 47, 56, 54, 8, 9, 10, 14, 15, 17, 37, 49,};
	int i;
	int j;

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	for (i = 0; i < 30; i++)
	{
		printf("%7d%13d       ", i, Graph[i]);

		for (j = 0; j <= Graph[i]; j++)
		{
			printf("%c", '*');
		}
		
		printf("\n");
	}

	return (0);
}
