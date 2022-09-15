#include "main.h"

/**
 * print_triangle - starting point of a function
 *
 * @size: a value to be entered
 *
 * Description: the function will print a straid line
 *
 * Return: Retuns nothing
 */

void print_triangle(int size)
{
	int rows, hash, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (space = size - rows; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= rows; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
