#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _puts - prints strings and a new line
 * @str: incoming str
 * Return: void
 */
void _puts(char *str)
{
	write(1, str, strlen(str));
	_putchar('\n');
}
