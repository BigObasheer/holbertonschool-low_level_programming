#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point.
 * Return: Always 0.
 */

int main(void)
{
	char pass[1000000];
	int a;
	int b = 0;
	int c;
	int i = 0;

	while (b < 2646)
	{
		srand(time(NULL));
		b = (rand() % 96 + 32);
		c += b;
		pass[i] = b;
		i++;
	}
	a = 2772 - c;
	c = c + a;
	pass[i] = a;
	printf("%s", pass);

	return (0);
}
