#include "holberton.h"

/**
 * puts2 - function that prints every other character of a string,
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < (_strlen(str) - 1); i+=2)
	{
		_putchar(i);
	}
	_putchar('\n');
}
