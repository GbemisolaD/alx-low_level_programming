#include "main.h"
/**
 * swap_int - this is a function that swaps the value on one integer with another
 * @a: input 1
 * @b: input 2
 * Return: integers
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
