#include <stdio.h>

/**
 * main - prints no of args
 * @argc: int
 * @argv: array
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
