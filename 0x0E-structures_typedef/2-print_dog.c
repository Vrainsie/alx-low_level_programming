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
	char *name;
	float age;
	char *owner;

	if (d != NULL)
	{
		name = d->name;
		age = d->age;
		owner = d->owner;

		if (name != NULL)
			printf("Name: %s\n", name);
		else
			printf("Name: (nil)\n");

		if (age > 0)
			printf("Age: %f\n", age);
		else
			printf("Age: 0\n");

		if (owner != NULL)
			printf("Owner: %s\n", owner);
		else
			printf("Owner: (nil)\n");
	}
}