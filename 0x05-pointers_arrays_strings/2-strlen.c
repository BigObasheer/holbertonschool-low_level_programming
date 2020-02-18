#include "holberton.h"

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
