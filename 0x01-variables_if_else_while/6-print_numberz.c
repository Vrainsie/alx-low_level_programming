#include <stdio.h>

/**
 * main - is entry
 *
 * Return: 0 on success
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);
}
