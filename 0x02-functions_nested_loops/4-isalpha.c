#include "main.h"

/**
 * _isalpha - checks for alphaberic character.
 *@c: charcter to be checked
 * Return: 1 if c otherwise 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
