#include "main.h"

/**
 * last_index - returns last index
 * @s: pointer
 * Return: int
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - checks
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - checkr
 * @s: strinf
 * @start: int
 * @end: int
 * @pair: int
 * Return: 0 or 1
 */

int check(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}
