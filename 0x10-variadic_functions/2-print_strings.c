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
	va_list mylist;

	unsigned int i;

	va_start(mylist, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{

			if (i == (n - 1))
			{
				printf("%s\n", va_arg(mylist, char*));
				break;
			}

			printf("%s%s", va_arg(mylist, char *), separator);
		}
	}
	va_end(mylist);
}
