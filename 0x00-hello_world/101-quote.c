#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints the message 
 *   "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 *   to the standard error (stderr) using the write system call.
 *   It does not use printf or puts.
 *
 * Return:
 *   Always returns 1 to indicate an error condition.
 */
int main(void)
{
    /* Message to be printed */
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /* Using the write system call to print to stderr (file descriptor 2) */
	write(2, message, 59);
	/* 59 is the length of the message excluding the null terminator */

	return (1);
}
