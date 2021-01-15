#include "search_algos.h"

/**
 * binary_search - use linear search to find particular value
 * @array: array of ints
 * @size: size of array
 * @value: value of integer being searched
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	int i, start = 0, end = size - 1, half;

	if (!array)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array:");
		for (i = start; i < end; i++)
			printf(" %i,", array[i]);
		printf(" %i\n", array[end]);
		half = (start + end) / 2;

		if (array[half] == value)
			return (half);

		if (array[half] < value)
			start = half + 1;
		else
			end = half - 1;
	}
	return (-1);
}
