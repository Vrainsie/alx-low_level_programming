#include "main.h"
#include <string.h>

/**
 * print_rev - prints in reverse
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int x = strlen(s) - 1;
	int y;
	char z;

	for (y = x; y >= 0; y--)
	{
		z = s[y];
		_putchar(z);
	}


	_putchar('\n');
}
