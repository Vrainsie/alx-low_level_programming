#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints res of a mul
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Res on scs or 1 on fail
 */

int main(int argc, char *argv[])
{
	int j, k, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);
	k = atoi(argv[2]);


	res = j * k;
	printf("%d\n", res);
	return (0);
}
