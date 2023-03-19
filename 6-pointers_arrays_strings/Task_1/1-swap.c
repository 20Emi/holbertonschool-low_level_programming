#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *@a: number
 *@b: number
 * Return: Always 0.
 */
void
swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
