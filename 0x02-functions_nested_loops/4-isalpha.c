#include "main.h"

/**
 * _isalpha - Checks for alphabets from input
 * @c: incoming checker
 * Return: 1 on scs 0 on non alpha
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
