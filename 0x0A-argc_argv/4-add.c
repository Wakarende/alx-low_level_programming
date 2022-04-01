#include "main.h"

/**
 * main - adds positive numbers
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: program that adds two positive numbers
 * Return: Always (0) success
 */

int main(int argc, char *argv[])
{
	int i, add;

	add = 0;

	if (argc == 0)
	{
		return (printf("0\n"));
	}
	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
