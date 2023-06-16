#include <stdio.h>

/**
 * main - is entry
 *
 * Return: 0 on succss
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}

	putchar('\n');

	return (0);
}
