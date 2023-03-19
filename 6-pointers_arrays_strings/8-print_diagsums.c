#include "main.h"
#include <stdio.h>

void
print_diagsums(int *a, int size)
{
	int row, col;
	int sum = 0;
	int sum1 = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
				sum = sum + *(a + row * size + col);
		}
	}
	for (row = 0; row <= size; row++)
	{
		for (col = size; col >= 0; col--)
		{
			if (row == size - col - 1)
				sum1 = sum1 + *(a + row * size + col);
		}
	}
	printf("%d, %d\n", sum, sum1);/*the diagonal*/
}
