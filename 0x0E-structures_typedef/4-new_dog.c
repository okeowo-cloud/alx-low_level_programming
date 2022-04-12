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
	dog_t *copy_dog;

	char *copy_of_name, *copy_of_owner;

	copy_dog = malloc(sizeof(dog_t));
	if (copy_dog == NULL)
	{
		free(copy_dog);
		return (NULL);
	}

	copy_dog->age = age;

	if (name != NULL)
	{
		copy_of_name = malloc(len(name) + 1);
		if (copy_of_name == NULL)
		{
			free(copy_dog);
			return (NULL);
		}
		copy_dog->name = _strcpy(copy_of_name, name);
	}
	else
		copy_dog->name = NULL;
	if (owner != NULL)
	{
		copy_of_owner = malloc(len(owner) + 1);
		if (copy_of_owner == NULL)
		{
			free(copy_dog);
			return (NULL);
		}
		copy_dog->owner = _strcpy(copy_of_owner, owner);
	}
	else
		copy_dog->owner = NULL;
	return (copy_dog);
}
