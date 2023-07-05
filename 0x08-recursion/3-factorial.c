#include "main.h"

/**
 * factorial - Gives factorial of a number
 * @n: number to factor
 *
 * Return: Result
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else

	{
		return (n * factorial(n - 1));
	}
}
