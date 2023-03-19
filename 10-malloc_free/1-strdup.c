#include "main.h"
#include <stdlib.h>
#include <stddef.h>

char
*_strdup(char *str)
{
	int a;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a]; a++)
		;

	dup = malloc(sizeof(char) * a + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a]; a++)
		dup[a] = str[a];

	return (dup);
}
