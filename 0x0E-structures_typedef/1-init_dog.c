#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function intiailzes the dog type.
 * @d: pointer to a dog
 * @name: pointer to dog's name
 * @age: float represents dog's age
 * @owner: pointer to dog's owner
 * Return: is Always void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
