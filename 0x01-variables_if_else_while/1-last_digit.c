#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n,d);
	}
	else
	{
		if (n == 0)
		{
			printf("Last digit of %d is %d and is 0", n,d);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0", n,d);
		}
	}
	return (0);
}
