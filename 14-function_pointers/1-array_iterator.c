#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: the size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a = 0;

	if (array == NULL || size == '\0')
		return;

	if (action == NULL)
		return;

	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
