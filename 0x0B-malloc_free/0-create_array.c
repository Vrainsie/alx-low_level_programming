#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates and initializes an array
 * @size: size of array
 * @c: incoming random char
 *
 * Return: null on size 0 or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *arr;
	
	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));
	/*Avoid null from malloc*/
	if (arr == NULL)
		return (NULL);

	j = 0;

	while (j < size)
	{
		arr[j] = c;
		j++;
	}

	return (arr);
}
