#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 *print_numbers - function that prints numbers
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ers;

	unsigned int a = 0;

	va_start(ers, n);

	for (; a < n; a++)
	{
		if (a == n - 1 || separator == NULL)
		{
			printf("%d", va_arg(ers, int));
		}
		else
		{
			printf("%d%s", va_arg(ers, int), separator);

		}
	}
	printf("\n");

	va_end(ers);
}
