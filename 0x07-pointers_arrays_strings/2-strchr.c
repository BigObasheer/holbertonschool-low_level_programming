#include "holberton.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character c
 * Return: rest of string from character s
 */

char *_strchr(char *s, char c)
{

	for (; *s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
