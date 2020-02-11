#include "holberton.h"

/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
