#include "main.h"

/**
 * _strspn - returns the length of a prefix substring
 * @s: string to search for substring to return
 * @accept: accepted matches
 * Return: number of accepted matched bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (k);
		}
		i++;
	}
	return (k);

}
