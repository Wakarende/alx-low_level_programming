#include "main.h"

/**
 * _strlen_recursion - finds length of string
 * @s: string to find length of
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
