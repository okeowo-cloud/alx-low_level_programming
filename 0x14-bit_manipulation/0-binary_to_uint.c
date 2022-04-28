#include "main.h"

/**
 * binary_to_uint - function converts binary
 * to integer
 * @b: is a pointer to string
 * Return: is an unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0, length = 0, i = 0;

    if (b == NULL)
        return (0);

    while (b[length])
        length++;
    length -= 1;

    while (b[i])
    {
        if (b[i] != '0' || b[i] != '1')
            return (0);
        if (b[1] == '1')
            result += (1 * (1 << length));
        i++;
        length--;
    }
    return (result);
}