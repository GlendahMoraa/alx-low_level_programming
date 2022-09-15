#include "main.h"

/**
 * more_numbers - starting point of a function
 *
 * Description: the function printts 10 times 0 to 14
 *
 * Return: Retuns nothing
 */

void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; 0 <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num / 10 != 0)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
	}
	_putchar('\n');
}
