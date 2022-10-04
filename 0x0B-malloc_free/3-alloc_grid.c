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

	if ((width <= 0) || (height <= 0))
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)  malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			return (NULL);
			free(array);
			free(array[i]);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
