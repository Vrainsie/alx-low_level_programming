#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - finds the password
 * Return: the password
 */
int main(void)
{
	int pas;

	srand(time(0));
	pas = rand() / RAND_MAX;

	return (pas);
}
