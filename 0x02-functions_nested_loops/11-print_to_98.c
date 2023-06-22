#include "main.h"
#include <stdio.h>

/**
 * print_to _98 - prints n to 98
 * @n: par
 * Return: void
 */
void print_to_98(int n)
{
	int x;

	{
		if (n <= 98)
		{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				putchar(',');
			}
		}
		}
		else
		{
			for (x = n; x >= 98; x--)
			{
				printf("%d", x);
				if (x != 98)
				{
					putchar(',');
				}
			}
		}

		putchar('\n');
	}
}
