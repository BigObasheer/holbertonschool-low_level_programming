#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its own opcode
 * @argc: number of arguments. Should ALWAYS be 2. Else, return ERROR.
 * @argv: array of arguments.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
}
