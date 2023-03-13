#include "main.h"
#include <stddef.h>
#include <stdlib.h>

char
*create_array(unsigned int size, char c)
{
	unsigned int a;
	char *ray;

	ray = malloc(size * sizeof(char));

	if (size == 0 || ray == NULL)
	{
		return (NULL);
	}

	for (a = 0; a <= size; a++)
		ray[a] = c;

	return (ray);
}
