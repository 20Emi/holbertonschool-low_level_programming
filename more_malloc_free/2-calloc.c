#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - memory for an array
 *@nmemb: array elements
 *@size: array elements
 *
 *Return: memory pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a = 0;
	char *oc;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	oc = malloc(nmemb * size);

	if (oc == NULL)
	{
		return (NULL);
	}

	if (a < (nmemb * size))
	{
		oc[a] = 0; /*The memory is set to zero*/
		a++;
	}

	return (oc);
}

