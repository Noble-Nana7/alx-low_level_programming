#include "main.h"

/**
 * _strcpy - Copies the string pointed to by
 * src to dest
 * @dest: Pointer to the destination buffer.
 * @src: Pointr to the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0'; /*Add null terminator to dest*/

	return (dest);
}
