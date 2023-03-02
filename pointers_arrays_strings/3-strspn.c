#include "main.h"

unsigned int
_strspn(char *s, char *accept)
{
	unsigned int one = 0;
	unsigned int doo = 0;
	unsigned int a = 0;

	while (s[one])
	{
		while (accept[doo])
		{
			if (s[one] == accept[doo])
			{
				a++;
				one++;
				doo = -1;
			}
			doo++;
		}

		doo = 0;

		if (a != 0)
		{
			break;
		}
	}

	return (a);
}

