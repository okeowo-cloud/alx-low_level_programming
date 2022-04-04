#include "main.h"
#include <stdlib.h>

/**
* create_array - function creates an array of chars,
* and initializes it with a specific char.
* @size: is an integer
* @c: is a char
* Return: is a pointer
*/
char *create_array(unsigned int size, char c)
{
    char *s;

    unsigned int i = 0;

    s = malloc(sizeof(char) * size);

    if (s == NULL)
    {
        exit (1);
    }

    while (i < size)
    {
        s[i] = c;
        i++;
    }
    return (s);
}