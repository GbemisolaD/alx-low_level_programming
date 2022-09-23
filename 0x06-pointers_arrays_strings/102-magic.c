#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * I am trying to ensure the code is on line 19
	 * I sincerely hope this works
	 * FIngers crossed
	 * You must compile
	 * Grrr
	 */
	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);

	return (0);
}
