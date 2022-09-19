#include "main.h"

/**
 * _puts - the functions prints a string
 * @str: string input
 * Return: string
 */

void _puts(chat *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
