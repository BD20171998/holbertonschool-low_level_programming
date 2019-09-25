#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: integer to start from
 * Return: void
 */

void print_to_98(int n)
{
	int j;

	if (n < 98)
	{
		for (j = n; j < 99; j++)
		{
			printf("%i", j);

			if (j == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
		}
	}

	else if (n > 98)
	{

		for (j = n; j > 98; j--)
		{
			printf("%i", j);

			if (j == 98)
			{
				printf("\n");
				break;
			}
			printf(", ");
		}

	}

	else
		printf("98\n");

}
