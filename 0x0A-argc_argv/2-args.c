#include "main.h"

/**
 * main - prints all arguments
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: Function that prints all arguments it receives
 * Return: Always (0) success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
