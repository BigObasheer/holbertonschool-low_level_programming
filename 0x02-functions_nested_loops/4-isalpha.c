#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);

	else
		return (0);
}
