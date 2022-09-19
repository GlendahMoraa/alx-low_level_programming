#include "main.h"
#include <string.h>
/**
 * print_rev - starting point of a function
 *
 * @s: a string
 *
 * Description: prints a string in reverse
 *
 * Return: Return nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
