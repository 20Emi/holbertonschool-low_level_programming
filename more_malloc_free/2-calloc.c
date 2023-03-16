#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a;
	char *oc;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	oc = malloc(size * nmemb);

	if (oc == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < (size * nmemb); a++)
	{
		oc[a] = 0; /*The memory is set to zero*/
	}

	return (oc);
}

