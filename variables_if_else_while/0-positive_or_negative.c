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
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
  /*YOUR CODE GOES THERE*/
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero", n);
}
if (n < 0)
{
	printf("%d is negative", n);
}
return (0);
}
