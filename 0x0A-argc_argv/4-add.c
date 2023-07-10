#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints summation
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on success 1 on error
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);

	}

	printf("%d\n", sum);
	return (0);
}
