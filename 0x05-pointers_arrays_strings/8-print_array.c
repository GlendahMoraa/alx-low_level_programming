#include "main.h"
#include <string.h>
/**
 * print_array - starting point of a function
 *
 * @a: first value
 *
 * @n: second value
 *
 * Description: prints a string in reverse
 *
 * Return: Return nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < (n - 1))
		{
		printf("%i, ", a[i]);
		}
		else
		{
			printf("%i", a[i]);
		}
		i++;
	}
	printf("\n");
}
