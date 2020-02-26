#include "holberton.h"

/**
 * _print_recursion - prints a string
 * @s: string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
