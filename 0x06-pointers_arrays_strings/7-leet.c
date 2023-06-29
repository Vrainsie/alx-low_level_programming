#include "main.h"

/**
  * leet - Encoder
  * @s: param
  *
  * Return: encoded string
  */
char *leet(char *s)
{
	int a = 0, b = 0, l = 5;
	char chr1[5] = {'A', 'E', 'O', 'T', 'L'};
	char chr2[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < l)
		{
			if (s[a] == chr1[b] || s[a] - 32 == chr1[b])
			{
				s[a] = chr2[b];
			}

			b++;
		}

		a++;
	}

	return (s);
}
