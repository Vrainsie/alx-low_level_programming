#include "dog.h"
#include <stdlib.h>

/**
 * dog_t *new_dog - creates a new dog struct
 * @name: mem1
 * @age: mem2
 * @owner: mem3
 *
 * Return: pointer to new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	/*Memory allocation*/
	newdog = malloc(sizeof(dog_t));

	/*incase malloc failed*/
	if (newdog == NULL)
		return (NULL);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
