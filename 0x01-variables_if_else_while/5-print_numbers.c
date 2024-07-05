#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This code prints all the single digit numbers
 * of base 10 starting from o
 * to the output
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		printf("%d", i);
	}

	putchar('\n');

	return (0);
}
