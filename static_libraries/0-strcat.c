#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the target string to be concatenated
 * @src: pointer to the string to concatenate
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = src[j];
	return (dest);
}
