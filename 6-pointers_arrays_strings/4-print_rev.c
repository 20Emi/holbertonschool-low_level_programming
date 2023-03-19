#include "main.h"
#include <stdio.h>

void
print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	x--;

	while (x >= 0)
	{
		_putchar (s[x]);
		x--;
		}
	_putchar('\n');
}
