#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked (assumed to be ASCII)
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
