#include "main.h"

/**
  * _strncpy - copy string to another
  * @dest: param1
  * @src: param2
  * @n: limit
  *
  * Return: copied valued
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
