#include"main.h"

/**
 * main - starting point of a function
 * Description: the function primts _putchar
 * Return: Retuns 0 for success
 */

int main(void)
{
	char source[] = "_putchar";
	int i;
	int len = strlen(source);

	for (i = 0; i < len; i++)
		_putchar(source[i]);
	_putchar('\n');

	return (0);
}
