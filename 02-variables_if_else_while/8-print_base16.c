#include <stdio.h>
/**
 * main - start
 * Return: always 0
 *
 *
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (y = 97; y <= 102; y++)
	{
		putchar(y);
	}
	putchar('\n');

	return (0);
}
