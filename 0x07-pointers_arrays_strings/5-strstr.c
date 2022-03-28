#include "main.h"
/**
 * _strlen - Finds the length of a strings
 * @s: character which length is to be found.
 *
 * Return: none
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * *_strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: substring to be found
 *
 * Return: located substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int n = _strlen(needle);

	while (*haystack)
	{
		if (!memcmp(haystack, needle, n))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
