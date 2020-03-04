#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1 and s2 on success, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *cats;
	int i, j, x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	j++;
	cats = malloc((i + j) * sizeof(char));
	if (cats == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		cats[x] = s1[x];
	}
	for (y = 0; y < j; y++)
	{
		cats[x + y] = s2[y];
	}
	cats[x + y] = '\0';
	return (cats);
}
