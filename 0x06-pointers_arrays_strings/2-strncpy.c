#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0' && i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
