#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: function that multiplies two numbers
 * Return: Always (0) success
 */

int main(int argc, char *argv[])
{
	int i, num1, num2, product;

	if (argc != 3)
	{
		return (printf("Error\n"));
	}
	for (i = 0; i < argc; i++)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
	}
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}
