#include <stdio.h>
#include "holberton.h"

/**
 * main - Fibonacci numbers
 *
 * Return: void
 */

int main(void)
{
	long int i, j, k, l;

	j = 1;
	k = 2;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			printf("%ld, ", j);
			l = j + k;
			j = k;
			k = l;
		}
		printf("%ld\n", j);
	}
	return (0);
}
