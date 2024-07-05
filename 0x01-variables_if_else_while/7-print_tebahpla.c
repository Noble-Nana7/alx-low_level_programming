#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This code will print the lowercase alphabet
 * backwards.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int start = 122;
	int end = 97;

	int i;

	for (i = start; i >= end; --i)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
