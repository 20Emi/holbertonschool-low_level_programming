#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 if the array and value are NULL or the first
 * index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (!value || !array)
		return (-1);

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);

		if (value == array[a])
			return (a);
	}
	return (-1);
}
