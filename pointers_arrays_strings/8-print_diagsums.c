#include "main.h"

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
			{
				sum = sum + *(a + row * size + col);
			}
		}
	}
	for (row = 0; row >= size; row++)
	{
		for (col = 0; col >= size; col--)
		{
			if (row == col - 1)
			{
				sum1 = sum1 + *(a + row * size + col);
			}
		}
	}
}
