#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: first int
 * @separator: separates strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(str, char *);

		if (s == NULL)
		{
			printf("nil");
		}
		else
		{
			if (i < (n - 1) && separator != 0)
			{
				printf("%s%s", s, separator);
			}
			else
			{
				printf("%s", s);
			}
		}
	}
	va_end(str);
	putchar('\n');
}
