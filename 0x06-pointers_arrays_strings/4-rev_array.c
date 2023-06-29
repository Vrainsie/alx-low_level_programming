#include "main.h"

/**
  * reverse_array - reverses an array
  * @a: array
  * @n: limit
  *
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int *i, j, k, l;

	i = a;

	for (j = 1; j < n; j++)
	{
		i++;
	}

	for (l = 0; l < j / 2; l++)
	{
		k = a[l];
		a[l] = *i;
		*i = k;
		i--;
	}
}
