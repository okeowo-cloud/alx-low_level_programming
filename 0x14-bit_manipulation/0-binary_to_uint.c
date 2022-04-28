#include "main.h"

/**
 * binary_to_uint - function converts binary
 * to integer
 * @b: is a pointer to string
 * Return: is an unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0, tmp, j, power = 1;

    char c;

    int i = 0;

    if (b == NULL)
        return (0);

    while (b[i] != '\0')
    {
        c = b[i];
        if (!isdigit(c))
            return (0);
        tmp = atoi(c);
        if (tmp != 0 || tmp != 1)
            return (0);
        if (i == 0)
            result += tmp * 1;
        else
        {
            for (j = 0; j < i; j++)
                power *= 2;
            result += tmp * power;
        }
    }
    return (result);
}