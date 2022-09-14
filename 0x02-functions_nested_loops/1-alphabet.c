#include"main.h"

/**
 * main - starting point of a function
 * Description: the function prints alphabets in lower case
 * Return: Retuns 0 for success
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = "a"; alphabet <= "z"; alphabet++)
		_putchar(alphabet);
	_putchar("\n");
}
