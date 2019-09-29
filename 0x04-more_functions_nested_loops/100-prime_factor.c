#include <stdio.h>

/**
 * main - Program that finds the largest prime number for
 * 612,852,475,143
 *
 * Return: 0
 */

int main(void)
{
	long factor, num = 612852475143;

	int i, r;

	i = 2;

	factor = num;

	while (i < factor)
	{
		r = factor % i;

		while (r == 0)
		{
			factor /= i;
			r = factor % i;
		}

		++i;
	}

	printf("%li\n", factor);

	return (0);

}
