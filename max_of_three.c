#include <stdio.h>
/*my function prototype.*/
int maximum(int x, int y, int z);

/**
 * main - the main function.
 *
 * Return: return 0 if successful, else, otherwise.
 */
int main(void)
{
	int a, b, c; /*declaring the three parameters for my function*/

	scanf("%d %d %d", &a, &b, &c); /*to get values from user.*/

	printf("\n%d\n", maximum(a, b, c)); /*stdout the result*/

	return (0);
}

/**
 * maximum - the function that returns the max of three numbers.
 * @x: the first parameter.
 * @y: the second parameter.
 * @z: the third parameter.
 *
 * Return: it returns the max.
 */
int maximum(int x, int y, int z) /*function header*/
{
	int max;

	max = x;
	if (x < y)
		max = y;
	if (y < z)
		max = z;

	return (max);
}
