#include "main.h"

/**
 * _strchr - locates a character
 * @s: string
 * @c: character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0') /*Declaring While*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s */
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0); /* values null */
}
