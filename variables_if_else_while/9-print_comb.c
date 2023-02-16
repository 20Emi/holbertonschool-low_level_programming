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

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x == 9)
		{
		break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
