#include "main.h"

/**
 * _islower - does something
 * @c: contains value we wish to compare
 * Return: Always 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
