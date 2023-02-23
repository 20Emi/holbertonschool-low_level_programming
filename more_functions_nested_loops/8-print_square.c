#include "main.h"

/**
 * main - check the code
 *
 * @size: numero
 * Return: Always 0.
 */
void
print_square(int size)
{
	int y, x;

	if (size == 0)
	{
		_putchar('\n');
	}
	if (size < 0)
	{
		_putchar('\n')
	}
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
