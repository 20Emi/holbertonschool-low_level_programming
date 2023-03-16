#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: smallest value
 * @max: largest value
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int a;
	int *ge;

	if (min > max)
	{
		return (NULL);
	}

	ge = malloc(sizeof(int *) * (max - min) + 1);

	if (ge == NULL)
	{
		return (NULL);
	}

	for (a = 0; a = min; a <= max; a++)
	{
		ge[a] = min;
	}

	return (ge);
}



