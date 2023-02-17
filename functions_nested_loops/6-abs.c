#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @x: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int
_abs(int x)
{

	if (x < 0)
	{
	x = x * -1;
	return (x);
	}
	else
	{
	return (x);
	}
}
