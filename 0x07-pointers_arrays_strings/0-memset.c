#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer block of memory
 * @b: value to set
 * @n: bytes of memory
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
