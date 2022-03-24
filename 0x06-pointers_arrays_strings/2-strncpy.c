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
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
