#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet ten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int x = 0;
	int y = 'a';

	while (x <= 9)
	{
		while (y <= 'z')
		{
			_putchar(ch);
			y++;

		}
		y = 'a';
		_putchar('\n');
		x++;

	}
}
