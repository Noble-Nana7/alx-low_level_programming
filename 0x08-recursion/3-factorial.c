#include "main.h"

/**
 * factorial - This function returns the factorial
 * of any given number.
 * @n: The number to get the factorial.
 * Return: 1 if 0 and -1 when Error.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
