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
	if (separator != NULL)
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(char_list, unsigned int));
			if (i != (n - 1))
				printf("%s", separator);
		}
	printf("\n");
}
