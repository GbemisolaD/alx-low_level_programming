#include "main.h"

/**
 * main header
 * Description: print_alphabet _ Entry point
 * Return: 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
