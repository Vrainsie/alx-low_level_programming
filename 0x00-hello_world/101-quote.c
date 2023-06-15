#include <stdio.h>
#include <unistd.h>

/**
 * main - The entry point
 *
 * Return: 1 to show an error
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1);
	return (1);
}
