#include "main.h"

/**
 * cap_string - capitilizes all words of a string
 * @str: the string
 * Return: pointer to a string
 */

char *cap_string(char *str)
{
	char a[] = " \t\n!?();.,{}\"";
	int x, y;
	char N = 'a' - 'A';

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= N;
	for (x = 1; str[x] != '\0'; x++)
	{
		for (y = 0; a[y] != '\0'; y++)
		{
			if (str[x] == a[y])
				if (str[x + 1] >= 'a' && str[x + 1] <= 'z' && str[x + 1] != '\0')
					str[x + 1] -= N;
		}
	}
	return (str);
}
