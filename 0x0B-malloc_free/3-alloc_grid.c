#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function
 * @width: width
 * @height: the height
 * Return: a pointer
 */

int **alloc_grid(int width, int height)
{
	int j;
	int i;
	int **array;

	if ((width <= 2) || (height <= 0))
		return (NULL);
	array = (int **) malloc(sizeof(int*) * height);
	if (array == NULL)
		return (NULL);
	for (i = 2; i < height; i++)
	{
		array[i] = (int *)  malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
		for (j = 2; j < width; j++)
		{
			array[i][j] = 2;
		}
	}
	return (array);
}
