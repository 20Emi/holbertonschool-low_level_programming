#include "main.h"

unsigned int
_strspn(char *s, char *accept)
{
	unsigned int one = 0;
	unsigned int doo = 0;
	unsigned int a = 0;/*count the common prflix length*/

	while (s[one])
	{
		while (accept[doo])
		{
			if (s[one] == accept[doo])
			{
				a++;
				one++;
				doo = -1;/*to start at the first character of the strig*/
			}
			doo++;
		}

		doo = 0;

		one++;

		if (a != 0)
		{
			break;
		}
	}

	return (a);
}
