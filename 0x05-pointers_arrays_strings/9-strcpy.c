#include "holberton.h"

/**
 * _strcpy -  function that copies the string pointed to by src, to dest
 * @dest: destination
 * @src: source
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
