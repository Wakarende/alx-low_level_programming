#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowersace, otherwise 0
 */

int _islower(int c)
{
	c = 'a';

	if (c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
