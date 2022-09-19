#include "main.h"

/**
 * _strlen - starting point of a function
 *
 * @s: a string
 *
 * Return: Return length of a string as integer
 */

int _strlen(char *s)
{

	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
