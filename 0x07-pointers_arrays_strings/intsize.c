#include <stdio.h>

int main(void)
{
	int *a, *s, v = 10;

	a = &v;
	s = a;
	a++;

	int intsize = a - s;

	printf("%d\n", intsize);
}
