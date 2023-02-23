#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - check the code
 *
 * @n: numero
 * Return: Always 0.
 */
void
print_diagonal(int n)
{
	int dig;
	int ls;

	if (n < 0)
	{
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dig = 1; dig <= n; dig++)
		{
			for (ls = dig; ls >= n; ls++)
			{
				if (ls != 1)
				{
					_putchar (' ');
				}
			}
				_putchar ('\\');
		}
	}
}
