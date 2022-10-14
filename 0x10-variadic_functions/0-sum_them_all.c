#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum o
 * Return: Returns 0 and sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a_list;
	unsigned int i, sum = 0;

	va_start(a_list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(a_list, unsigned int);
	}
	va_end(a_list);
	return (sum);
}
