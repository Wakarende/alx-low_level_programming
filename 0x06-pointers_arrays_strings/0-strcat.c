#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: string to be concatenated
 *
 * Return: none
 */

char *_strcat(char *dest, char *src)
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
		dest[l1 + 1] = src[i];
	}
	return (dest);
}
