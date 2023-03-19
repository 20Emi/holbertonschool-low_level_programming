#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *@b: allocates memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ed;

	ed = malloc(b);
	{
		if (ed == NULL)
			exit(98);
	}
	return (ed);
}

