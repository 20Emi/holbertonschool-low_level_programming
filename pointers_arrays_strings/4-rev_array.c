#include "main.h"

void
reverse_array(int *a, int n)
{
	int i = 0, l = 0;
	int temp = n - 1;

	for (; l <= temp; l++, temp--)
	{
		i = a[l];
		a[l] = a[temp];
		a[temp] = i;
	}
}
