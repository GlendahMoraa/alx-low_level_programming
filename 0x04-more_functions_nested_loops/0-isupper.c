#include "main.h"
/**
 * _isupper - Funstino start point
 *
 * @c: The character to be checked
 *
 * Return: returns 1 id true  and -1 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
