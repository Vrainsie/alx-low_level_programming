#include "main.h"

/**
 * print_sign - prints signs of numbers
 * @n: incoming number
 * Return: 1 on +ve, 0 on zero and -1 on -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
