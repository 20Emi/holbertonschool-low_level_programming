#include "main.h"

char
*leet(char *a)
{
	int s = 0;
	int d = 0;
	char *letters = "AaEeOoTtLl";
	char num[] = "4433007711";

	for (; a[s]; s++)
	{
		for (d = 0; letters[d]; d++)
		{
			if (a[s] == letters[d])
			{
				a[s] = num[d];
			}
		}
	}
	return (a);
}
