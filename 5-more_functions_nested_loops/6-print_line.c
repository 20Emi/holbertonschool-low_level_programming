#include "main.h"
#include <stdio.h>
/**
 *print_line - check the code
 *@n: variable
 * Return: Always 0.
 */
void
print_line(int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
