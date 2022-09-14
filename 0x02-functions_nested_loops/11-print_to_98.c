#include "main.h"

/**
 * print_to_98 - starting point of a function
 *
 * @n: natural number
 * Description: the function prints all natural number
 *
 * Return: Retuns nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
