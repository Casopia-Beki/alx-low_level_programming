#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	m = n % 10;
	if (m > 5)
	{
		printf("%d and is greater than 5\n", m);
	}
	else if ((m < 6) && (m < 0))
	{
		printf("%d and is less than 6 and not 0\n", m);
	}
	else
	{
		printf("%d and is 0\n", m);
	}
	return (0);
}
