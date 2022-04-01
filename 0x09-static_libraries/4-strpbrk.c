#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 *
 * Return: character or NULL if character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

/**
 * *_strpbrk - searched a string for any set of bytes
 * @s: string to be searched
 * @accept: string to be compared
 *
 * Return: pointer to the byte in s that matches one in accept
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) && (accept == NULL))
	{
		return (NULL);
	}

	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
