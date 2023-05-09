#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_strings - function that prints strings
 * @n: number of strings
 * @separator: is the string to be printed between the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ngs;

	char *as;
	unsigned int a;

	va_start(ngs, n);

	for (a = 0; a < n; a++)
	{
		as = va_arg(ngs, char *);

		if (as == NULL)
			printf("(nil)");
		else
			printf("%s", as);

		if (a != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ngs);
}


