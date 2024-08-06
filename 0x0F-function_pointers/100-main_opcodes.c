#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, 1 if number of arguments is incorrect,
 * 2 if bytes is negative.
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", main_ptr[i] & 0xFF);
		if (i != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
