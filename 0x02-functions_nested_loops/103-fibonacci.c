#include <stdio.h>
#include "holberton.h"

/**
 * main - Fibonacci numbers
 *
 * Return: void
 */

int main(void)
{
	long int i, j, k, l, sum = 0;

	j = 1;
	k = 2;

	for (i = 0; i < 32; i++)
	{
		if (j % 2 == 0)
		{
			sum += j;
		}
		l = j + k;
		j = k;
		k = l;
	}
	printf("%ld\n", sum);
	return (0);
}
