#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - unction that concatenates all the arguments of your program
 * @ac: number of arguements
 * @av: arguemnets
 * Return: pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			;
	}
	ptr = malloc(sizeof(char) * (k + ac + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[k] = '\n';
		k++;
	}
	return (ptr);
}
