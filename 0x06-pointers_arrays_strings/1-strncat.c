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
	int l1, l2, i;

	l1 = 0;
	l2 = 0;

	while (l1 != '\0')
	{
		l1++;
	}
	while (l2 != '\0')
	{
		l2++;
	}

	for (i = 0; i <= l2; i++)
	{
		if (l2 < n)
		{
			dest[l1 + 1] = src[i];
		}
	}
	return (dest);
}
