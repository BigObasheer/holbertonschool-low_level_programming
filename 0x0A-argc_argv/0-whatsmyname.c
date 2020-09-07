#include <stdio.h>

/**
 * main -  program that prints its name
 * @argc: number of arguments
 * @argv: string in command line
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
