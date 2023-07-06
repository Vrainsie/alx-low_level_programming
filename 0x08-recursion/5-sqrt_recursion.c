#include "main.h"

int _checker(int n, int i);

/**
 * _checker - checks if their is a ntroot
 * @n: number to check
 * @i; root creater
 *
 * Return: Result
 */

int _checker(int n, int i)
{
	int nqrt = i * i;

	if (nqrt > n)
		return (-1);

	if (nqrt == n)
		return (i);

	return (_checker(n, i + 1));
}

/**
 * _sqrt_recursion - prints square root of a number
 * @n: integer to give square
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	return (_checker(n, 1));
}
