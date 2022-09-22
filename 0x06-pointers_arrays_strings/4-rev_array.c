#include "main.h"

/**
 * reverse_array - reverse contents
 * @a: array of integers
 * @n: size of array
 * Description: reverse array contents
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	for (i = 0; i < n; i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
