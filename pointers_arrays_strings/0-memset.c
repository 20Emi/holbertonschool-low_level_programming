#include "main.h"

char
*_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		if (s[a] == '\0')
		{
			break;
		}

		a++;
	}
	return (s);
}
