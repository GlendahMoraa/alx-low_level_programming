#include "main.h"

/**
 * _abs - starting point of a function
 *
 * @n: The value to be converted
 *
 * Description: converts the valued to absolute
 *
 * Return: Returns the absolute value
 */

int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
