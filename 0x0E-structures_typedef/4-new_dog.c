#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * len - find length of string
 * @str: string
 * Return: length of string.
 */
int len(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		;
	return (i);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= len(src); i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - function creates a new dog
 * @name: is a pointer to dog's name
 * @age: dog's age in float
 * @owner: pointer to dog's owner
 * Return: is a pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	char *copy_of_name, *copy_of_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->age = age;

	if (name != NULL)
	{
		copy_of_name = malloc(len(name) + 1);
		if (copy_of_name == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		new_dog->name = _strcpy(copy_of_name, name);
	}
	else
		new_dog->name = NULL;
	if (owner != NULL)
	{
		copy_of_owner = malloc(len(owner) + 1);
		if (copy_of_owner == NULL)
		{
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = _strcpy(copy_of_owner, owner);
	}
	else
		new_dog->owner = NULL;
	return (new_dog);
}
