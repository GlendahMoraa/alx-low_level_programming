#include "main.h"

/**
 * _puts - starting point of a function
 *
 * @str: a string
 *
 * Description: prints a string
 *
 * Return: Return nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
