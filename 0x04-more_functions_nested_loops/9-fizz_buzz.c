#include <stdio.h>
/**
 * main - starting point
 *
 * Description: prints FizzBuzz
 *
 * Return: does not return anything
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 5 == 0) && (num % 3 == 0))
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);

		if (num < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
