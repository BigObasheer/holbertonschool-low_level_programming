#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer
 * Return: n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
