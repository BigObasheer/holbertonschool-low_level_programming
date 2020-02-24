#include "holberton.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string to be returned
 * Return: Returns a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *haystack; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
			;
		if (!needle[i])
			return (haystack);
	}
	return (0);
}
