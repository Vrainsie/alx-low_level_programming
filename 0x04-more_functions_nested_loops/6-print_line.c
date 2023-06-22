#include "main.h"

/**
 * print_line - draws a line of given length
 * @n: param
 * Return: void
 */
void print_line(int n)
{
	int x;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
