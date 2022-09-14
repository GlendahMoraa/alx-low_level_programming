#include "main.h"

/**
 * jack_bauer- starting point of a function
 *
 * Description: prints time of the day
 *
 * Return: Returns nothing
 */

void jack_bauer(void)
{
	int h, m;

	while (h < 24)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		} h++;
	}
}
