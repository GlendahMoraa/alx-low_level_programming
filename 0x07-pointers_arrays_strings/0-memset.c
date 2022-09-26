#include "main.h"

/**
 * _memset - A function that fills memory witha constant byte
 * @s: pointer
 * @b: character variable
 * @n: unsigned integer variable
 * Return: char*
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(s + i) = b;
return (s);
}
