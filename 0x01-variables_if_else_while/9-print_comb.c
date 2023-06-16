#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = a; b < 10; b++)
		{
			putchar(a + '0');
			putchar(',');
			putchar(' ');
			putchar(b + '0');

			if (a != 9 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
