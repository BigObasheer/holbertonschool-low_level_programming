#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of
 * number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long i, j;
	long num;

	num = 612852475143;
	for (i = 2; i < sqrt(num); i++)
	{
		if ((num % i) == 0)
		{
			j = i;
			num = num / i;
			i = 1;
		}
	}
	j = num;
	printf("%ld\n", j);
	return (0);

}
