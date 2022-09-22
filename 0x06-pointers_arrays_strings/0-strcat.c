#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strcat - starting point of a function
 *
 * @dest: First values
 *
 * @src: second value
 *
 * Return: Return nothing
 */


char *_strcat(char *dest, char *src)
{
	int i = 0, lenght = 0;

	while (*(dest + lenght) != '\0')
		lenght++;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + lenght) = *(src + i);
		lenght++;
	}
	*(dest + lenght) = *(src + i);

	return (dest);
}
