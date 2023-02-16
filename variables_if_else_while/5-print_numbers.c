#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: Always 0 (if is success)
 **/
int main(void)
{
	char c;

	for (c = 0 ; c <= 9 ; c++)
	{
		putchar (c);
	}
	putchar('\n');
	return (0);
}
