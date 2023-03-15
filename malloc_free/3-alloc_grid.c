#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: 2 dimensional array
 * @height: 2 dimensional array
 *
 * Return: NULL
 */

int
**alloc_grid(int width, int height)
{
	int a, h;
	int **rid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	rid = malloc(sizeof(int *) * height);

	if (rid == NULL)
	{
		return (NULL);
	}
		for (a = 0; a < height; a++)
		{
			rid[a] = malloc(sizeof(int) * width);
			if (rid[a] == NULL)
			{
				for (h = a - 1; h >= 0; h--)
				{
					free(rid[h]); /**borra el contanido del puntero*/
				free(rid); /**borra el puntero*/
				return (NULL);
				}
			}
		}
		for (a = 0; a < height; a++)
		{
			for (h = 0; h < width; h++)
				rid[a][h] = 0;
		}
		return (rid);
}
