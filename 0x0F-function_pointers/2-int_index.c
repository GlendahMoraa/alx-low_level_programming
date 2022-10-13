#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches an integer
 * @array: An array of elements
 * @size: Number of elements in the array
 * @cmp: Function pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if ((array != NULL) && (size > 0) && (cmp != NULL))
	{
		for (count = 0; count < size; count++)
		{
			if (cmp(array[count]) != 0)
				return (count);
		}
		if (size <= 0)
			return (-1);
	}
	return (-1);
}
