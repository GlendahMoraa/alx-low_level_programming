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
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}
