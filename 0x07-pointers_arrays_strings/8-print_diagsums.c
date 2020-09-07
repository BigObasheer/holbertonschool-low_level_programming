#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of integers
 * @a: integers in array
 * @size: size of integers
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int diagonal1 = 0;
	int diagonal2 = 0;
	int x;

	for (x = 0; x < (size * size); x += size + 1)
		diagonal1 += a[x];

	for (x = size - 1; x < (size * size - 1); x += size - 1)
		diagonal2 += a[x];

	printf("%d, %d\n", diagonal1, diagonal2);
}
