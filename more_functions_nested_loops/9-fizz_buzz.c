#include "main.h"
#include <stdio.h>
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 && num % 5)
		{
			printf("FizzBuzz ");
		}
		else if (num % 5)
		{
			printf("Buzz ");
		}
		else if (num % 3)
		{
			printf("Fizz ");
		}
	}
	printf("%d ", num);
	return (0);
}

