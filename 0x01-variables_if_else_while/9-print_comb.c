#include <stdio.h>

/**
 *main - single digit number combos
 *
 *Return: All possible number combos
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)

	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
