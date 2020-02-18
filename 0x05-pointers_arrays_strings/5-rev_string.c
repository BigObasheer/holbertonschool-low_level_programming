#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int start, end, temp;

	end = (_strlen(s) - 1);
	while (start <= end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
