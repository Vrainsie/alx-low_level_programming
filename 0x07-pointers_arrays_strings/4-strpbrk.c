#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source
  * @accept: accepted
  *
  * Return: data from found accepted
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
