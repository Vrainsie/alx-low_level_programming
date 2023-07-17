#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize vars for a struct
 * @d: the struct
 * @name: mem1
 * @age: mem2
 * @owner: mem3
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Be sure the struct passed aint null*/
	if (d != NULL)
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
