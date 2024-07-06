#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the sizes of various types:
 *   - a char
 *   - an int
 *   - a long int
 *   - a long long int
 *   - a float
 * These sizes are printed in bytes using the sizeof operator.
 *
 * Return:
 *   Always returns 0 to indicate successful execution.
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}

