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
	int c;

	for (c = 'z' ; c <= 'a' ; c++)
	{
		putchar (c);
	}
	putchar('\n');
	return (0);
}

