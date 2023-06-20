#include "main.h"

/**
 * main - Prints using _putchar
 * _putchar - Takes place of stdios
 *
 * Return: 0 on scs
 */
int main(void)
{
	char str[] = "_Putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
