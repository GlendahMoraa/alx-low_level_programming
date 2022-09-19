#include "main.h"
#include <string.h>
/**
 * rev_string - starting point of a function
 *
 * @s: a string
 *
 * Description: prints a string in reverse
 *
 * Return: Return nothing
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char str[500];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}
