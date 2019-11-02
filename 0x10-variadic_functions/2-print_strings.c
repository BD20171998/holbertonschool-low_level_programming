#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: Char pointer for string to be printed
 * @n: Unsigned int for number of arguments
 * @...: variable number of arguments
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *arg;

	va_start(valist, n);

	arg = va_arg(valist, char *);

	if (n == 1)
	{
		if (arg != NULL)
			printf("%s\n", arg);
		else
			printf("(nil)\n");
		return;
	}

	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (arg == NULL)
			printf("(nil)");
		else
			printf("%s", arg);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		arg = va_arg(valist, char *);
	}

	printf("\n");
	va_end(valist);
}
