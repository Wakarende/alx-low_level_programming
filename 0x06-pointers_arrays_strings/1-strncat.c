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
	int l1, l2;

	l1 = 0;
	l2 = 0;

	while (dest[l1] != '\0')
	{
		l1++;
	}
	while (src[l2] != '\0' && l2 < n)
	{
		dest[l1 + 1] = src[l2];
		l2++;
	}
	dest[l1] = '\0';
	return (dest);
}
