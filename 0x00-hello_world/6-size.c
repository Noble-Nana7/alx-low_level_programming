#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the sizes of various types:
 *   - char
 *   - int
 *   - long
 *   - long long
 *   - float
 *   - double
 *   - long double
 * These sizes are printed in bytes using the sizeof operator.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));

	return (0);
}
