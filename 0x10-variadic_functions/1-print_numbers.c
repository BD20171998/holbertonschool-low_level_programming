#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: Const char pointer for string to be printed before numbers
 * @n: Unsigned int for integers passed to the function
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;

	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%i\n", va_arg(valist, int));
			break;
		}

		if (separator == NULL)
			printf("%i", va_arg(valist, int));

		printf("%i%s", va_arg(valist, int), separator);
	}

	va_end(valist);

}
