#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	float f;
	char c;
	long int l;
	long long int t;

	printf("The size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a float: %lu.\n", (unsigned long)sizeof(f));
	printf("The size of a character: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of an long int: %lu.\n", (unsigned long)sizeof(l));
	printf("The size of an long long int: %lu.\n", (unsigned long)sizeof(t));
	return (0);
}
