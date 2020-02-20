#include "holberton.h"
/**
 * leet - function that encodes a string into 1337
 * @s: string
 *
 * Return: encoded leet string
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;
	int j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				k = j;
				s[i] = numbers[k];
			}
		}
	}
	return (s);
}
