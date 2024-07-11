#include "main.h"

/**
 * _strlen_recursion - A fucntion that caalculates and prins the
 * length of a string.
 * @s: The poiter to the string that will be calculated.
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
