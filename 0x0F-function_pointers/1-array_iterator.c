#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: array
 * @size: size of the array
 * @action: is a pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
