#include "main.h"

/**
 * print_times_table - starting point of a function
 *
 * @n: the value
 *
 * Description: the function prints times tablq
 *
 * Return: Retuns nothing
 */

void print_times_table(int n)
{
	int num, p, m;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				p = num * m;

				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				} else if (p <= 99 && p >= 10)
					_putchar((p / 10) + 48);
				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
