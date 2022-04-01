#include "main.h"
#include <stdio.h>

/**
 * main - prints name followed by new line
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: program that prints its name
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
