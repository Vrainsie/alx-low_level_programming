#include "main.h"
#include <stdio.h>

/**
 * main - prints all argv passed
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 on scs
 */

int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
