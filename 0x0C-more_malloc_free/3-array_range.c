#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;
	ptr = malloc(sizeof(int) * (size + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
