#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: Unsigned int for number of arguments
 * @...: variable number of arguments
 * Return: Int of the sum of arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumlist;

	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(sumlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(sumlist, int);

	va_end(sumlist);

	return (sum);
}
