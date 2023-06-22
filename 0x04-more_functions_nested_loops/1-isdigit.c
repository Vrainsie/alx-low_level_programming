#include "main.h"

/**
 * _isdigit - checks for int 0-9
 * @c: param
 * Return: 1 on isdigit in range 0 on otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
