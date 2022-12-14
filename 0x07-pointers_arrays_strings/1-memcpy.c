#include "main.h"

/**
 * _memcpy - copies number bytes
 * @dest: content to be copied
 * @src: source of data
 * @n: bytes of memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
