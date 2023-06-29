#include "main.h"

/**
  * cap_string - Capitalize all
  * @s: param
  *
  * Return: converted string
  */
char *cap_string(char *s)
{
	int a = 0, b;
	int c = 13;
	char chr[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		b = 0;

		while (b < c)
		{
			if ((a == 0 || s[a - 1] == chr[b]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

		       b++;
		}

		a++;
	}

	return (s);
}
