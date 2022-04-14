#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: parameter
 *
 * Description: Function that returns the sum of all its parameters
 * Return: n
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	va_start(ap, n);
	j = 0;
	if (n == 0)
	{
		return (n);
	}
	for (i = 0; i < n; i++)
	{
		j += va_arg(ap, int);
	}
	va_end(ap);
	return (j);
}
