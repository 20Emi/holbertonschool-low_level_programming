#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ers;

	unsigned int a;

	va_start (ers, n);

	for (a = 0; a < n; a++)
	{
		if (a == n - 1 || separator == NULL)
		{
			printf("%d", va_arg(ers, int));
		}

	printf("%d%s", va_arg(ers, int), separator);

	}
	printf("\n");

	va_end (ers);
}
