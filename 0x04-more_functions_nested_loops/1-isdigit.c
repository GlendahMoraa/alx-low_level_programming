#include "main.h"

/**
 * _isdigit - starting point of a function
 *
 * @c: Value to be checked
 *
 * Description: the function checks for a digit
 *
 * Return: Retuns 1 if digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
