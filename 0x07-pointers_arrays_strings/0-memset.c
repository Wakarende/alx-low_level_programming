#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: character to be added
 * @n: bytes of memory to be filled
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
