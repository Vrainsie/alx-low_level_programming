#include "main.h"

/**
 * more_numbers - prints more numbers on new lines
 * Return: void
 */
void more_numbers(void)
{
	int rows = 0;

	while (rows < 10)
	{
		int x = 0;

		while (x <= 14)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
			{
				_putchar(x + '0');
			}

			x++;
		}

		_putchar('\n');
		rows++;
	}
}
