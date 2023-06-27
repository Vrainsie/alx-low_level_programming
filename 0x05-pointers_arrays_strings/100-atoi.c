#include "main.h"

/**
 * _atoi - The int finder in string
 * @s: the string
 * Return: int value found or 0 on no int
 */
int _atoi(char *s)
{
	/* Ascii int Range 48 - 57 */
	/* Ascii +ve = 43, -ve = 45*/

	int pos = 0;
	int neg = 1;
	unsigned int valpos = 0;
	int intgr = 0;

	while (s[pos])
	{
		if (s[pos] == 45)
		{
			neg *= -1;
		}

		while (s[pos] >= 48 && s[pos] <= 57)
		{
			intgr = 1;
			valpos = (valpos * 10) + (s[pos] - '0');
			pos++;
		}

		if (intgr == 1)
		{
			break;
		}

		pos++;
	}

	valpos *= neg;
	return (valpos);
}
