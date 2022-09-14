#include "main.h"

/**
 * times_table - starting point of a function
 *
 * Description: generates a times table
 *
 * Return: Return nothing
 */

void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			p = n * m;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + 48); /*the first digit*/

			_putchar((p % 10) + 48); /*the second digit*/
		}
		_putchar('\n');
	}
}
