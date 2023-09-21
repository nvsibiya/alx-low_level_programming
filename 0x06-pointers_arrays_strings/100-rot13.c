#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: the string to encode
 * Return: pointer to string
 */

char *rot13(char *str)
{
	int x, y;
	char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char B[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char tmp;

	for (x = 0 ; str[x] != '\0'; x++)
	{
		tmp = str[x];
		for (y = 0 ; A[y] != '\0'; y++)
		{
			if (str[x] == A[y])
			{
				tmp = B[y];
				break;
			}
		}
		str[x] = tmp;
	}
	return (str);
}
