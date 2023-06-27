#include "main.h"

/**
 * puts2 - prints every multiple of 2
 * @str: param
 * Uses _puts
 */
void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}

	for (x = 0; x < y; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}

	_putchar('\n');
}
