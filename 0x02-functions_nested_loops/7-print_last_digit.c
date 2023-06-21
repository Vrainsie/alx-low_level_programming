#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last value  of any int
 * @x: is par
 * Return: 0 on scs
 */
int print_last_digit(int x)
{
	int ld = abs(x % 10);

	_putchar(ld + '0');
	return (0);
}
