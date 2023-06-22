#include "main.h"

/**
 * print_square - prints square
 * @size: param for size
 * Return: void
 */
void print_square(int size)
{
	int x;
	int y;

	if (size < 1)
	{
		_putchar('\n');
	}

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}

		_putchar('#');
		_putchar('\n');
	}

	_putchar('\n');
}
