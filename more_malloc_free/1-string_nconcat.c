#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: one strings
 * @s2: two strings
 * @n: number of characters in s1
 *
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, c;
	char *ing = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n  = strlen(s2);
	}

	ing = malloc(sizeof(char) * ((strlen(s1) + n) + 1));

	if (ing == NULL)
	{
		return (NULL);
	}

	for (c = 0; c <= (strlen(s1) + n); c++)
	{
		if (c < strlen(s1))
		{
			ing[c] = s1[c];
		}

		if (c >= strlen(s1))
		{
			ing[c] = s2[a];
			a++;
		}
	}
	return (ing);
}

