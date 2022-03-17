#include <stdio.h>

/**
 * main - prints numbers from 1 - 100,followed by a new line.
 * But for multipels of 3 print Fixx and for multiples of 5 - Buzz
 * For numbers multiples of both 3 and 5 print FizzBuzz.
 *
 * Return: 1-100 and Fizz Buzz.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (i);
}
