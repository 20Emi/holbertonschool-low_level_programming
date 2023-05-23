#include "search_algos.h"

/**
 * 
*/
int binary_search(int *array, size_t size, int value)
{
	size_t a = 0, b = size -1;
	size_t half, k;

	if (!array)
		return (-1);
	
	while (a <= b)
	{
		printf("Searching in array: ");
		for (k = a; k < b; k++)
		{
			printf("%i, ", array[k]);
		}
		printf("%i\n", array[k]);
		half = (a + b)/ 2;
		if (array[half] == value)
			return (half);
		else if (value > array[half])
			a = half + 1;
		else
			b = half - 1;
	}
		return (-1);
}
