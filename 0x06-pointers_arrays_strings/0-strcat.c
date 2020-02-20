#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: combined two strings
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char *d1 = dest;
	char *s1 = src;

	for (i = 0; d1[i] != ('\0'); i++)
	{
	}
	for (j = 0; s1[j] != ('\0'); j++, i++)
	{
		d1[i] = s1[j];
	}
	d1[i] = ('\0');
	return (d1);
}
