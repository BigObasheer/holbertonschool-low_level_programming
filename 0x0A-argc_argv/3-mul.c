#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that multiplies two numbers
 * @argc: number of arguements
 * @argv: string of arguements
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
	}
	return (0);
}
