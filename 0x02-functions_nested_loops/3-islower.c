#include "holberton.h"

/**
 * _islower - checks for lower case letter
 * @c: letter
 * Return: 0 for uppercase 1 for lowercase
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
