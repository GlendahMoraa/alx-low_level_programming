#include "main.h"
#include <string.h>
/**
 * puts2 - starting point of a function
 *
 * @str: a string
 *
 * Description: prints a string in reverse
 *
 * Return: Return nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
