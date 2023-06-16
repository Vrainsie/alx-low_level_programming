#include <stdio.h>

/**
 * main - is entry
 *
 * Return: 0 on succss
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
