#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starting point of a function
 *
 * Return: Retuns 0 for success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
