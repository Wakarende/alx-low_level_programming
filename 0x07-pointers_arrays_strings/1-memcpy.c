#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: destination of the copied memory
 * @src: source of the copied memory
 * @n: number of bytes to be copied
 *
 * Return: Destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
