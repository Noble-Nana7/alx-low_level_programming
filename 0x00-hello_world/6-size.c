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
	printf("Size of long: %zu byte(s)\n", sizeof(long));
	printf("Size of long long: %zu byte(s)\n", sizeof(long long));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	printf("Size of double: %zu byte(s)\n", sizeof(double));
	printf("Size of long double: %zu byte(s)\n", sizeof(long double));

	return (0);
}
