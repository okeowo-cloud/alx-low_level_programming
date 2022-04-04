#include "main.h"
#include <stdio.h>
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

    if (size <= 0)
        return (NULL);

    s = malloc(sizeof(char) * size);

    if (s == NULL)
        return (NULL);

    while (i < size)
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return (s);
}