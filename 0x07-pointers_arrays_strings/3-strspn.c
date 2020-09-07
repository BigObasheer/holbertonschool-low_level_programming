#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: bytes contanied in string
 * Return: the number of bytes of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;
	unsigned int count = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
			}
		}
		if (x > count)
			return (count);
	}
	return (count);
}
