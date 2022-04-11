#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of file
 *
 * Description: Functions that prints name of file it was compiled from
 * 
 * Returns: Always (0) Success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
