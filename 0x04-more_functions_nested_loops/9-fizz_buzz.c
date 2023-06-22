#include <stdio.h>
#include <string.h>

/**
 * main - is entry
 * Return: 0 on scs
 */
int main(void)
{
	int x = 1;
	char val[20];

	while (x <= 100)
	{
		/* Replace accorddingly*/
		if ((x % 3) == 0)
		{
			strcpy(val, "Fizz");
		}
		else if ((x % 5) == 0)
		{
			strcpy(val, "Buzz");
		}
		else if ((x % 3) == 0 && (x % 5) == 0)
		{
			strcpy(val, "FizzBuzz");
		}
		else
		{
			val[20] = sprintf(val, "%d", x);
		}

		printf("%s ", val);
		x++;
	}

	putchar('\n');

	return (0);
}
