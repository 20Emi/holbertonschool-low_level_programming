#include <stdio.h>
/**
 * main - start
 * Return: always 0
 *
 *
 */
int main(void)
{
	char x;
	char y;

	for (x = 48; x <= 57; x++)
	for (y = 97; y <= 102; y++)
	{
	putchar(x);
}
{
	putchar(y);
}
	putchar('\n');

	return (0);
}
