#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function prints the dog type
 * @d: is a pointer to dog
 * Return: is Always void.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
