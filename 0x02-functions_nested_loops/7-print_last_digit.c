#include "main.h"

/**
 * print_last_digit - starting point of a function
 *
 * @n: The values character
 *
 * Description: prints the last digit
 *
 * Return: Return the last digit
 */

int print_last_digit(int n)
{
	int ldigit;

	if (n < 0)
		ldigit = (n % 10) * -1;
	else
		ldigit = n % 10;
	_putchar(ldigit + '0');
	return (ldigit);
}
