#include "main.h"

/**
 * print_line - draws a straing line in terminal
 * @n: number of times line should be printed
 * Return: Straight line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
