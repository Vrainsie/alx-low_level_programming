#include "main.h"

/**
 * print_alphabet_x10 - Gives a times 10 print
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 1;

	while (i <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		i++;
	}
}
