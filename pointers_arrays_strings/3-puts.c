#include "main.h"
#include <stdio.h>

void _puts(char *str)
{
	int g;

	for (g = 0; str[g] != '\0'; g++)
	{
		_putchar(str[g]);
	}
	_putchar ('\n');
}
