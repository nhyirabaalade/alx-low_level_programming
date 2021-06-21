#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	int c;
	for (c = 'a'; c<= 'z'; ++c)
	{
		putchar("%c", c);
	}
	return 0;
}
