#include "holberton.h"

/**
 * jack_bauer - function that that prints every minute of the day
 * starting from 00:00
 * Return: void
 */

void jack_bauer(void)
{
	int hrs, hrs_2, min, min_2;

	for (hrs = 48; hrs < 51; hrs++)
	{
		for (hrs_2 = 48; hrs_2 < 58; hrs_2++)
		{
			for (min = 48; min < 54; min++)
			{
				for (min_2 = 48; min_2 < 58; min_2++)
				{
					if (hrs_2 > 51 && hrs == 50)
						break;

					_putchar(hrs);
					_putchar(hrs_2);
					_putchar(':');
					_putchar(min);
					_putchar(min_2);
					_putchar('\n');
				}

			}

		}

	}

}
