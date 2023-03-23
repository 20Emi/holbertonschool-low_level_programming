#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: varadic
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pon;

	unsigned int sum = 0, a = 0;

	va_start(pon, n);

	if (n == 0)
		return (0);

	for (; a < n; a++)
		sum += va_arg(pon, int);

	va_end(pon);

	return (sum);
}
