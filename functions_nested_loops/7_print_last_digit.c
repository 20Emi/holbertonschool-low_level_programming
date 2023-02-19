#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the caracter c to stout 
 * @x: the caracter to print
 *
 * return: 
 */
int
print_last_digit(int x)
{
	int e = x % 10;

		if (e < 0)
		{
			e = e * -1;
		}
		_putchar (e + '0');
		return(e);
}
