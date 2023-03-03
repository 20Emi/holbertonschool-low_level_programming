#include "main.h"

char
*_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;

	if (needle[0] == '\0')
		return (haystack + 0);
	while (haystack[b])
	{
		t = b;
		while (needle[a] == haystack[t])
		{
			if (c == 0)
				c = t;
			a++;
			t++;
			if (needle[a] == '\0')
				return (haystack + b);
		}
		a = 0;
		c = 0;
		b++;
	}
	return (0);
}
