#include "main.h"

/**
 * _isupper - checks the case of a character
 * @c: character undergoing the test
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
