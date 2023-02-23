#include "main.h"

/**
 *print_triangle - write the triangle
 *@size: number
 *
 * Return: Always 0.
 */

void
print_triangle(int size)
{
	int x, i;
	int es;

	if (size <= 0)
	{
		_putchar ('\n');
	}
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
