#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * upper - uppercase
 * @c: pointer to string
 * Return: pointer to string
 */

char *upper(char *c)
{
	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= 32;
	return (c);
}

/**
 * new_word - compares to char to char
 * @c: char to check
 * Return: 0 or 1
 */

int new_word(char c)
{
	int i = 0;
	char *word = "\t\n,;.!?\"(){}";

	while (word[i] != '\0')
	{
		if (c == word[i])
			return (1);
		i++;
	}

	return (0);
}
