#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: A NULL termionated dtrig at the
 * end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t write_stat;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{

		while (text_content[len])
			len++;

		write_stat = write(fd, text_content, len);
		if (write_stat == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
