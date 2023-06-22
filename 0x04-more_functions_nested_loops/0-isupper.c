#include "main.h"

/**
 * _isupper - checks  for uppercase
 * @c: parameter
 * Return: 1 on upper 0 on otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
