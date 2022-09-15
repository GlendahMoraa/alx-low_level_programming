#include "main.h"

/**
 *  more_numbers - starting point of a function
 *
 * Description: the function prints 0 to 4 10 times
 *
 * Return: Retuns nothing
 */

void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; 0 <= 10; i++)
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
