#include <stdio.h>
#include "holberton.h"

/**
 * main - Fibonacci numbers
 *
 * Return: void
 */

int main(void)
{
	long int i, a, a1, a2, b, b1, b2, c, c1, c2;

	a = 1;
	b = 2;
	a1 = a / 1000000;
	a2 = a % 1000000;
	b1 = b / 1000000;
	b2 = b % 1000000;

	for (i = 0; i < 98; i++)
	{
		if (i < 85)
		{
			printf("%ld, ", a);
			c = a + b;
			a = b;
			b = c;
		}
		else if (i >= 85 && i < 97)
		{
			c1 = c / 1000000;
			c2 = c % 1000000;
		}
		else
		{
			printf("%ld%ld\n", a1, a2);
		}
	}
	return (0);
}
