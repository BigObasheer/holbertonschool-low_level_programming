#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes with specific char
 * @c: char that initializes array
 * @size: size of array
 * Return: null if size 0 otherwise return pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
