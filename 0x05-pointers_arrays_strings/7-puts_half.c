#include "main.h"

/**
 * puts_half - prints last half
 * @str: param
 * Return: void
 */
void puts_half(char *str)
{
	int x;
	int z = 0;

	while (str[z] != '\0')
	{
		z++;
	}

	if (z % 2 == 0)
	{
		x = (z / 2);
	}
	else
	{
		x = (z - 1) / 2;
		x += 1;
	}

	for (; x < z; x++)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
