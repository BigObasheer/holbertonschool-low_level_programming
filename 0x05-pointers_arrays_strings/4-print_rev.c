#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s; string
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; s[i] >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
