#include "holberton.h"
int find_prime_number(int n, int m);

/**
 * find_prime_number - help find if input number is prime or not
 * @n: input number
 * @m: divide n
 * Return: prime number
 */

int find_prime_number(int n, int m)
{
	if (n % m != 0 && m < 10)
	{
		return (find_prime_number(n, m + 1));
	}
	else if  (n % m != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - find if input number is prime or not
 * @n: input number
 * Return: prime number
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (find_prime_number(n, 2));
}
