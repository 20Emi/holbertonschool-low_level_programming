#include "main.h"

int
_sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt_re(n, 0));
}
int
_sqrt_re(int one, int two)
{
	if (two * two > one)
	{
		return (-1);
	}
	if (two * two == one)
	{
		return (two);
	}
	return (_sqrt_re(one, two + 1));
}

