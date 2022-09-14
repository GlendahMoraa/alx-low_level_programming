#include "main.h"

/**
 * main - starting point of a function
 * Description: the function prints alphabets in lower case
 * Return: Retuns 0 for success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
