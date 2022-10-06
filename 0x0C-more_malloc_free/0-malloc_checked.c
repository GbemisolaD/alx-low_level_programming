#include <stdlib.h>

/**
 * malloc_checked - array
 * @b: number of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
