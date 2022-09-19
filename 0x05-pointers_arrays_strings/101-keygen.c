#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - function root
*
* Description: Generated random paswords
*
* Return: Return nothing
*/

int main(void)
{
	srand(time(NULL));
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
}

