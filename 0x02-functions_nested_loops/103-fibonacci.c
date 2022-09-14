#include"main.h"

/**
 * main - The starting point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4million
 *
 * Return: Returns 0
 */

int main(void)
{
	unsigned long i, a, b, c, s;

	a = s = 0;
	b = 1;

	for (i = 0; i < 59; i++)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0 && c < 4000000)
		{
			s = s + c;
		}
	}
	printf("%lu\n", s);

	return (0);
}
