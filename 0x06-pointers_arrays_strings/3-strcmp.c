#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: param1
  * @s2: param2
  *
  * Return: an int 0 or 1
  */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	int chk;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		chk = a;
	}
	else
	{
		chk = b;
	}

	while (c <= chk)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (d);
}
