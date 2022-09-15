#include "main.h"

/**
 *  print_diagonal - starting point of a function
 *
 * @n: a value to be entered
 *
 * Description: the function will print a diagnol line
 *
 * Return: Retuns nothing
 */

void print_diagonal(int n)
{
	int rows, numLines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= n; rows++)
		{
			if (rows > 1)
			{
				for (numLines = 1; numLines <= rows - 1; numLines++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
