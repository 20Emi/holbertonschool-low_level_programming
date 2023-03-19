#include "main.h"

int
is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
int
prime(int n, int two)
{
	if (two == 1)
	{
		return (1);
	}
	if (n % two == 0)
	{
		return (0);
	}
	if (n % two != 0)
	{
		return (prime(n, two - 1));
	}
	return (0);
}
