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
	int i, l;

	i = 0;
	l = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[l] != '\0')
	{
		l++;
	}
	if (l < n)
	{
		dest[i] = '\0';
	}
	else if (l > n)
	{
		dest[i + 1] = src[l];
	}
	return (dest);
}
