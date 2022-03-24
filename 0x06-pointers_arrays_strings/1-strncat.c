#include "main.h"

/**
 * *_strncat - function that concatenates strings
 * @dest: destination string
 * @src: string to be concatenated
 * @n: number of bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		++len;
	}
	while (src[i] != 0 && i < n)
	{
		dest[len] = src[i];
		++i;
		++len;
	}
	dest[len] = '\0';
	return (dest);
}
