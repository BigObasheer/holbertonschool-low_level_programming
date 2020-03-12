#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that performs simple operations.
 * @argc: arguement
 * @argv: number of arguements
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int a, b, answer;
	char *op = argv[2];
	char *divide = "/";
	char *mod = "%";

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (strcmp(op, divide) != 0 || strcmp(op, mod) != 0))
	{
		printf("Error\n");
		exit(100);
	}
	if ((*get_op_func(argv[2])) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	answer = (get_op_func(argv[2]))(a, b);
	printf("%d\n", answer);
	return (0);
}
