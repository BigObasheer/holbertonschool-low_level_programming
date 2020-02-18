#include "holberton.h"

/**
 * puts2 - function that prints every other character of a string,
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < (_strlen(str) - 1); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
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
