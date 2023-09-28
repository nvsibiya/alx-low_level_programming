#include "main.h"

/**
 * _strlen - find string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen(++s));
}

/**
 * compare - palindrome
 * @s: pointer to string
 * @p: palindrome position
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *s, int p)
{
	if (p < 1)
	{
		return (1);
	}

	if (*s == *(s + p))
	{
		return (compare(s + 1, p - 2));
	}
	return (0);
}

/**
 * is_palindrome - check if is palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, len - 1));
}
