#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Prints the last digits a number
 * Return: O - Success
 */
int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;

	if (z > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, z);
	}
	else if (z < 6 && z != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, z);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, z);
	}
	return (0); }