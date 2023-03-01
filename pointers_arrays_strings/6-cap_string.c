#include "main.h"

char
*cap_string(char *may)
{
	int a = 0;

	while (may[a])
	{
		if (may[a] >= 97 && may[a] <= 122 && may[a] == may[0])
			may[a] -= 32;
		if (may[a] >= 97 && may[a] <= 122)
		{
			switch (may[a - 1])
			{
				case 44:
				case 59:
				case 46:
				case 33:
				case 63:
				case 34:
				case 40:
				case 41:
				case 123:
				case 125:
					may[a] -= 32;
			}
			a++;
		}

	}
	return (may);
}
