#include "holberton.h"
int extra_sqrt_recursion(int n, int m);

/**
 * extra_sqrt_recursion - help function calculate if n is a perfect square
 * @m: sqrt
 * @n: number
 * Return: square root of a number
 */

int extra_sqrt_recursion(int n, int m)
{
	if (m * m < n)
	{
		return (extra_sqrt_recursion(n, m + 1));
	}
	else if (m * m == n)
	{
		return (m);
	}
	else
	{
		return (-1);
	}
}

/**
 *  _sqrt_recursion - function that calculates if n is a perfect square
 * @n: number
 * Return: sqrt of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (extra_sqrt_recursion(n, 1));
}
