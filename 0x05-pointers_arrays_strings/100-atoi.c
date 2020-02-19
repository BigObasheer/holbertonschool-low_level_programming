#include "holberton.h"
#incude <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	if (*s == '\0')
		return (0);

	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		if (isNumericChar(s[i]) == false)
			return 0;
		res = res * 10 + s[i] - '0';
	}
	return (sign * res);
}
