#include <stdio.h>
#include <math.h>


/**
 * main - starting point of a function
 *
 * Description: the function will print the largest prime number
 *
 * Return: Retuns nothing
 */

int main(void)
{

unsigned int long n = 612852475143, a = (int) sqrt(n);

while (1)
{

	if (n % a == 0)
	{
		printf("%lu \n", n / a);
		break;
	}
	a--;

}

return (0);
}
