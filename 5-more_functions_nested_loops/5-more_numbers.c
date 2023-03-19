#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

void
more_numbers(void)
{
	int num, x;

		for (num = 0; num <= 9; num++)
		{
			for (x = 0; x <= 14; x++)
			{
				if (x > 9)
					_putchar (x / 10 + '0');
				_putchar (x % 10 + '0');
			}
			_putchar ('\n');
		}
}
