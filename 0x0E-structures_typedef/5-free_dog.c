#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - setsfree allcoted mem
 * @d: the location
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
