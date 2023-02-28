#include "main.h"

void
puts_half(char *str)
{
	int var = 0;

	int car = 0;

	while (str[var])
	{
		var++;
	}

	car = var;
	car = (var + 1) / 2;
	while (str[car])
		{
		_putchar (str[car]);
		car++;
		}
		_putchar('\n');
}
