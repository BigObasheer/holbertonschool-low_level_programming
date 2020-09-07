#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: index size
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int s = 0;
	int e = n - 1;
	int temp;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
