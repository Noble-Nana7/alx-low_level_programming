#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: i used the for loop and the putchar to print the
 * alphabets in small cases.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int start = 97;
	int end = 122;

	int i;

	for (i = start; i <= end; ++i)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
