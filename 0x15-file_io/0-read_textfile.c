#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include  "main.h"

/**
 * read_textfile - Reads a text file and prits it to the 
 * POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters and numbers it could print.
 *
 * Return: The number of letters it oculd read and print  or
 * 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		perror("Error allocating memory");
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		perror("Error reading file");
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		perror("Error writing to stdout");
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_written);
}
