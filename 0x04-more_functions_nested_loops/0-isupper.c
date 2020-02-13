#include "holberton.h"

/**
 * _isupper - checks for upper case letter
 * @c: letter
 * Return: 1 for uppercase 0 for lowercase
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
