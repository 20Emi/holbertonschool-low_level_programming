#include "main.h"
/**
 * _isupper - checks for uppercase char
 *@c: character
 * Return: 1 if c is upercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
