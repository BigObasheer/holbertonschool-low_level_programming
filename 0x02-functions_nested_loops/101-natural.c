#include <stdio.h>
#include "holberton.h"

/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 *
 * Return: void
 */

int main(void)
{
	int i;
	long int total;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			total = total + i;
		}
	}
	printf("%li\n", total);
	return (0);
}
