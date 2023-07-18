#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

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
	int nam = 0, own = 0;

	if (name != NULL && owner != NULL)
	{
		nam = _strlen(name) + 1;
		own = _strlen(owner) + 1;
	}
	else
	{
		return (NULL);
	}



	/*Memory allocation*/
	newdog = malloc(sizeof(dog_t));

	/*incase malloc failed*/
	if (newdog == NULL)
		return (NULL);

	/* Allocation for newdog*/
	newdog->name = malloc(sizeof(char) * nam);
	newdog->owner = malloc(sizeof(char) * own);

	/*Incase either failled*/
	if (newdog->name == NULL || newdog->owner == NULL)
		return (NULL);

	newdog->name = _strcpy(newdog->name, name);
	newdog->age = age;
	newdog->owner = _strcpy(newdog->owner, owner);

	return (newdog);
}



/**
  * _strcpy - Copy a string
  * @dest: destination
  * @src: source
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	dest[j++] = '\0';

	return (dest);
}


/**
  * _strlen - string counter
  * @s: incoming
  *
  * Return: string length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

