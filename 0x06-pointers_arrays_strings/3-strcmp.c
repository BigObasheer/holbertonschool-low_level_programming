#include "holberton.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	char *s3 = s1;
	char *s4 = s2;

	while (*s3 == *s4)
	{
		if (*s3 == '\0' || *s4 == '\0')
			break;
		s3++;
		s4++;
	}
	if (*s3 > *s4)
	{
		return (*s3 - *s4);
	}
	if (*s3 < *s4)
	{
		return (*s3 - *s4);
	}
	else
	{
		return (0);
	}
}
