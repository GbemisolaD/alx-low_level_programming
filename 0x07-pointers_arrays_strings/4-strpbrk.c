#include "main.h"

/**
 * _strpbrk - matches specified character
 * @s: string to be scanned
 * @accept: character
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
