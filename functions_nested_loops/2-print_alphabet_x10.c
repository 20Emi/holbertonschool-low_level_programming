#include <stdio.h>
#include "main.h"

/**
 * main - start
 * Return: always 0
 *
 *
 */
void
print_alphabet_x10(void)
{
	char x = 'a';
	int e = 0;

	for (e = 0; e <= 9; e++)
	{
	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
	}
}
