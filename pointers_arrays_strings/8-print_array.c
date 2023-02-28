#include "main.h"
#include <stdio.h>
void
print_array(int *a, int n)
{
	int cont = 0;

	for (; cont < n; cont++)
	{
		printf("%d", a[cont]);

		if (cont < n - 1)
		{
			printf(", ");
		}
	}
		putchar('\n');
}
