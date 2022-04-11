#ifndef _dog
#define _dog

/**
 * struct dog - description of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * my_dog - Typedef for struct dog
 */

typedef struct dog my_dog;

#endif
