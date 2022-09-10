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
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
