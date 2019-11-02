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

	if (n == 1)
	{
		printf("%i\n", va_arg(valist, int));
		return;
	}

	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		if (separator == NULL)
			printf("%i", va_arg(valist, int));

		else
			printf("%i%s", va_arg(valist, int), separator);
	}

	if (i == n - 1)
		printf("%i\n", va_arg(valist, int));

	va_end(valist);

}
