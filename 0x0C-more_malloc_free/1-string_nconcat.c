#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: first n bytes of s2
 * Return: s1, followed by the first n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cats;
	unsigned int i, j, x, y;

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
	for (j = 0; s2[j] != 0; j++)
	{
	}
	j++;
	cats = malloc((sizeof(*cats)) * (i + (n * sizeof(*s2) + 1)));
	if (cats == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		cats[x] = s1[x];
	}
	for (y = 0; y < n; y++)
	{
		cats[x + y] = s2[y];
	}
	cats[x + y] = '\0';
	return (cats);
}
