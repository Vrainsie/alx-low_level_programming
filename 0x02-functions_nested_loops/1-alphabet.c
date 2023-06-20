#include "main.h"
/**
 * print_alphabet - Prints alphabets
 * Relies on _putchar to actuall do the outputs
 *
 * Return: 0 success
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');

	return;
}
