#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - this function calculates print a range of numer
 *
 * @n: is the number to print
 */
void print_to_98(int n)
{
	int p = 98;

	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", p);
}
