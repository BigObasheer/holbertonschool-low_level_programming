#include "holberton.h"
#include <stdio.h>
int _strlen_recursion(char *s);
int helper_palindrome(char *s, int x, int y);

/**
 *_strlen_recursion - returns str length
 * @s: string to calculate length
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * helper_palindrome - help
 * @s: string
 * @x: count
 * @y: size of string
 * Return: string
 */

int helper_palindrome(char *s, int x, int y)
{
	if (x == 0)
		x = _strlen_recursion(s);
	if (s[x - 1] != s[y])
	{
		return (0);
	}
	else if (s[x - 1] == s[y] && y <= x)
	{
		return (helper_palindrome(s, --x, ++y));
	}
	else
	{
		return (1);
	}
}

/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: if palindrome
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (helper_palindrome(s, 0, 0));
}
