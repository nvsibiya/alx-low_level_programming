#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *s1, *s2;

	for (s1 = s; *s1; s1++)
	{
		for (s2 = accept; *s2; s2++)
		{
			if (*s1 == *s2)
			{
				return (s1);
			}
		}
	}
	return (NULL);
}
