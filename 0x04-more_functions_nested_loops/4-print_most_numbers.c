#include "main.h"

/**
 * print_most_numbers - Prints most nos in 0-9 range exclusive
 * Return: void
 */
void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
		x++;
	}

	_putchar('\n');
}
