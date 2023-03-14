#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

char
*str_concat(char *s1, char *s2)
{
	int as, sa;
	char *cats;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	cats = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (cats == NULL)
	{
		return (NULL);
	}

	for (as = 0; s1[as] != '\0'; as++)
	{
		cats[as] = s1[as];
	}

	for (sa = 0; s2[sa] != '\0'; sa++)
	{
		cats[as] = s2[sa];
		as++;
	}
	return (cats);
}
