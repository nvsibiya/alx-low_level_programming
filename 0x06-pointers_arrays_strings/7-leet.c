#include "main.h"

/**
 * leet - encodes a string in 1337
 * @str: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *str)
{
	int x, y;

	char *letrs = "aAeEoOtTlL";
	char *repls = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (str[x] == letrs[y])
			{
				str[x] = repls[y];
			}
		}
	}

	return (str);
}
