#include "main.h"

/**
 * swap_int - swaps two ints
 * @a: intgr 1
 * @b: intgr 2
 * Return:  void
 */
void swap_int(int *a, int *b)
{
	/*temp holds a for a  while*/
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
