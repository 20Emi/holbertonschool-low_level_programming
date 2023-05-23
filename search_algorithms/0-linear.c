#include "search_algos.h"

/**
 * 
*/
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (!value || !array)
		return (-1);
	
	for ( a = 0; a < size; a++)
	{
		printf ("Value checked array[%ld] = [%d]\n", a, array[a]);
		
		if (value == array[a])
			return (a);
	}
	return (-1);
}