#include "main.h"

/**
 * _islower - starting point of a function
 *
 * @c: The values character
 *
 * Description: by useing the ASCII values to locate lower case
 *
 * Return: Return 1 if true and 0 if false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
