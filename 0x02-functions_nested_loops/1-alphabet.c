#include"main.h"

/**
 * main - starting point of a function
 * Description: the function prints alphabets in lower case
 * Return: Retuns 0 for success
 */

void print_alphabet(void)
{
	int ch;

	for (ch = "a"; ch <= "z"; ch++)
		_putchar(ch);
	_putchar("\n");
}
