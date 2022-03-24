#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination of copied string
 * @src: string to be copied
 * @n: no of characters to be copied
 * Return: Copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
