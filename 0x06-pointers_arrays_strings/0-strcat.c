#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	/**
	 * Find the length of the destination string
	 */
	while (dest[x] != '\0')
	{
		x++;
	}
	/**
	 * Append characters from src to dest
	 */
	while (src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	/**
	 * Add a null terminator to the end of the concatenated string
	 */
	dest[x + y] = '\0';

	return (dest);
}
