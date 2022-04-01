#include "main.h"

/**
 * main - program that prints number of arguments passed into it
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: Program that prints number of arguments passed into it
 * Return: Always (0) success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		*argv[i] = *argv[i];
		printf("%d\n", i);
	}
	return (0);
}
