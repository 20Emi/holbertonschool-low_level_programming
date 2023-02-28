#include "main.h"
#include <stdio.h>
#include <string.h>

void
puts2(char *str)
{
	size_t a;

	for (a = 0; a < strlen(str); a + = 2)
	{
		_putchar (str[a]);
	}
	_putchar ('\n');
}
