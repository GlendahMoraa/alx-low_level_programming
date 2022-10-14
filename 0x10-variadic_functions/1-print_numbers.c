#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Functio that prints numbers
 * @separator: string
 * @n: index
 * @...: args
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list char_list;
	unsigned int i;

	va_start(char_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(char_list, unsigned int));
		if (i != (n - 1) && (separator != NULL))
			printf("%s", separator);
		}
	printf("\n");
	va_end(char_list);
}
