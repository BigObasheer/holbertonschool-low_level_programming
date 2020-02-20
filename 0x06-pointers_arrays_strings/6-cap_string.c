#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	char sep[] = " ,;.!?\"(){}\t\n";
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; s[x] > 'a' && s[x] < 'z' && sep[y] != '\0'; y++)
		{
			if (s[x - 1] == sep[y] || s[x] == s[0])
			{
				s[x] = s[x] - 32;
			}
		}
	}
	return (s);
}
