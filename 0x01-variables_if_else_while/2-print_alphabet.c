#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - alphabet in lowecase, followed by a new line
 *
 * Description: The numbers are generated automatically
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
