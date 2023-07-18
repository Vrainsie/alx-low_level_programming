#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints contents of a struct
 * @d: struct data
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s", (d->owner) ? d->owner : "(nil)");
	}
}
