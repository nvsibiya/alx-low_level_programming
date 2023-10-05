#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string
 *         or NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int bytes1 = 0, bytes2 = 0, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[bytes1] != '\0')
		bytes1++;
	while (s2[bytes2] != '\0')
		bytes2++;
	if (n >= bytes2)
		n = bytes2;
	concat = malloc(sizeof(char) * (bytes1 + n + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < bytes1; i++)
		concat[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];
	concat[i] = '\0';
	return (concat);
}
