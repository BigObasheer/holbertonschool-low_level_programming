#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - eturns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int i, j;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;
	dup = malloc(i * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
