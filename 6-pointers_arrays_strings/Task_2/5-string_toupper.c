#include "main.h"

char
*string_toupper(char *may)
{
	int a;

	for (a = 0; may[a] != '\0'; a++)
	{
		if (may[a] >= 97 && may[a] <= 122)
			may[a] -= 32;
	}
	return (may);
}

