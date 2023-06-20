#include "main.h"

/**
 * _islower - Checks id character is lower
 *
 * @c: is incoming int
 * Return: 1 on lower, 0 on any other outcome
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
