#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 * Return: -1 if if array is NULL or If value is not present in array
*/
int binary_search(int *array, size_t size, int value)
{
	size_t right = 0, left = size - 1;
	size_t half, k;

	if (!array)
		return (-1);

	while (right <= left)
	{
		printf("Searching in array: ");
		for (k = right; k < left; k++)
		{
			printf("%i, ", array[k]);
		}
		printf("%i\n", array[k]);
		half = (right + left) / 2;
		if (array[half] == value)
			return (half);
		else if (value > array[half])
			right = half + 1;
		else
			left = half - 1;
	}
		return (-1);
}
