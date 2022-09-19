#include "main.h"

/**
 * swap_int - starting point of a function
 *
 * @a: First values
 *
 * @b: second value
 *
 * Return: Return nothing
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;

}
