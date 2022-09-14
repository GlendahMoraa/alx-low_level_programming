#include"main.h"

/**
 * main - starting point of a function
 * Description: the function primts _putchar
 * Return: Retuns 0 for success
 */

int main(void)
{
	char source[] ="_putchar";
	int i;

	for (i = 0; i < strlen(source); i++)
		_putchar(source[i]);
	_putchar('\n');

	return (0);
}
