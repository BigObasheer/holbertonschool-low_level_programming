#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = '1'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');

	return (0);
}
