#include "main.h"

/**
 * print_line - starting point of a function
 *
 * @n: a value to be entered
 *
 * Description: the function will print a straid line
 *
 * Return: Retuns nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
