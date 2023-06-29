#include "main.h"

/**
  * _strncat - Concats two strings utilizing n
  * @dest: param1
  * @src: param2
  * @n: stop of the concatenatin
  *
  * Return: Pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x])
	{
		x++;
	}

	while (y < n && src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x + n + 1] = '\0';

	return (dest);
}
