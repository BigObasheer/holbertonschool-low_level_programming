#include "search_algos.h"

/**
 * linear_search - use linear search to find particular value
 * @array: array of ints
 * @size: size of array
 * @value: value of integer being searched
 * Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
  size_t index = 0;

  if (!array)
    return (-1);

  while (index < size)
    {
      printf("Value checked array[%d] = [%d]\n", index, array[index]);
      if (array[index] == value)
	return (index);
      index++;
    }
  return (-1);
}
