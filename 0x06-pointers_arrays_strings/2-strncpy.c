#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: copied string
 * @src: string that is to be copied
 * @n: number of bytes
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
