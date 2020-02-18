#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return(i);
}
