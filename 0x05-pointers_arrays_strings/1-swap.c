#include "main.h"

/**
 * swap_int - functions that swaps values of two integers
 * @a: first interger
 * @b: second integer
 *
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
