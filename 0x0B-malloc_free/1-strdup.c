#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string.
 * If str is NULL or if insufficient memory was available, returns NULL.
 */

char *_strdup(char *str)
{
	char *dupl;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	dupl = malloc((len + 1) * sizeof(char));
	if (dupl == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dupl[i] = str[i];
	}
	return (dupl);
}
