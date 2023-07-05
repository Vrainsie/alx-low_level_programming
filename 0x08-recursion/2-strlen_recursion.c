#include "main.h"

/**
 * _strlen_recursion - gives length of string
 * @s: incoming string
 *
 * Return: length of string as int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
