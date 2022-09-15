#include "main.h"

/**
 * print_numbers - starting point of a function
 *
 * Description: the function prints digit numbers
 *
 * Return: Retuns nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
