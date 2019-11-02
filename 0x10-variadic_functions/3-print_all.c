#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: Const char pointer for formats to be printed
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list buffer;
	char *temp;
	int i = 0;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(buffer, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char)va_arg(buffer, int));
			break;
		case 'i':
			printf("%i", va_arg(buffer, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(buffer, double));
			break;
		case 's':
			temp =  va_arg(buffer, char *);
			if (temp == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", temp);
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(buffer);
}
