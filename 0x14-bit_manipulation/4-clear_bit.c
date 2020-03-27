#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: unsigned
 * @index: index
 * Return: 1 if it worked or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63 || !n)
		return (-1);
	mask = 1 << index;
	*n = (*n & ~mask) | ((0 << index) & mask);
	return (1);
}
