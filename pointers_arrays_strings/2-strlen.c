#include "main.h"
#include <stdio.h>

int
_strlen(char *s)
{
	int put = 0;

	while (*s != '\0')
	{
		put++;
		s++;
	}

	return (put);
}
