#include "main.h"

/**
 * leet - convert string to leet
 * @c: string
 * Description: replaces letters to figures
 * Return: string c
 */

char *leet(char *c)
{
	int count = 0, i;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(c + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(c + count) == lower_case[i] || *(c + count) == upper_case[i])
			{
				*(c + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (c);
}
