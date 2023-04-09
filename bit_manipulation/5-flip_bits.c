#include "main.h"

unsigned int
flip_bits(unsigned long int n, unsigned long int m)
{
	int dif = n ^ m;
	int cont = 0;

	while (dif)
	{
		cont += dif & 1;
		dif >>= 1;
	}
	return (cont);
}
