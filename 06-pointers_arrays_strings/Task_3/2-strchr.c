#include "main.h"

char
*_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
		if (c == '\0')
		{
			return (s + a);
		}
		return (0);
}
