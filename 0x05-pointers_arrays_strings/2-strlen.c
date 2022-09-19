#include "main.h"

/**
 * _strlen - this function returns the length of a string
 * @s: character input
 * Return: length of input string
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
