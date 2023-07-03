#include "main.h"

/**
 * _memset - fill with a constant
 * @s: src
 * @b: dest
 * @n: limit
 *
 * Return: filled data
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
