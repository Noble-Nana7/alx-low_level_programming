#include "main.h"

int is_prime_recursive(int n, int divisor);

/**
 * is_prime_number - Checks if n is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number and 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_recursive(n, 2));

}

/**
 * is_prime_recursive - Checks if n is a prime number recursively.
 * @n: The nUmber to be checked for primality.
 * @divisor: The current divisor being checked.
 *
 * Return: 1 if n is a prime number, and 0 if not.
 */

int is_prime_recursive(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, divisor + 1));
}
