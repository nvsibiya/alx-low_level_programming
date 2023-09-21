#include "main.h"

/**
 * leet - encodes a string in 1337
 * @str: string to be encoded
 *
 * Return: the resulting string;
 */

char *leet(char *str)
{
	char *letrs = "aAeEoOtTlL";
	char *rep = "443370711";

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; letrs[j] != '\0'; j++)
		{
			if (str[i] == letrs[j])
			{
				str[i] = rep[j];
				break;
			}
		}
	}
	return (str);
}
