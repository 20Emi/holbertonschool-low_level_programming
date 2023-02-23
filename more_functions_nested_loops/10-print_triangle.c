#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void
print_triangle(int size)
{
	int x, i;
	int es;

	for (x = 0; x < size; x++)
	{
		for (es = size - 1; es > x; es--)
		{
			_putchar (' ');
		}
		for (i = 0; i <= x; i++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
