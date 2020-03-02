#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main -  program that adds positive numbers
 * @argc: number of arguements
 * @argv: string of arguements
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc <  1)
		printf("%d\n", 0);
	{
		while (argc-- && argc > 0)
		{
			for (i = 0; argv[argc][i] != '\0'; i++)
			{
				if (!(isdigit(argv[argc][i])))
				{
					printf("Error\n");
					return (1);
				}
			}
			j = atoi(argv[argc]);
			sum = sum + j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
