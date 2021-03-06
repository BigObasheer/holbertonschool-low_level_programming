#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: bytes from src
 * Return: combined two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *d1 = dest;
	char *s1 = src;

	for (i = 0; d1[i] != ('\0'); i++)
	{
	}
	for (j = 0; j < n && s1[j] != ('\0'); j++, i++)
	{
		d1[i] = s1[j];
	}
	return (d1);
}
