#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/*Find the end of the destination string*/
	char *end_dest = dest;

	while (*end_dest != '\0')
	{
		end_dest++;
	}
	/*Append at most n characters from src to dest*/
	while (*src != '\0' && n > 0)
	{
		*end_dest = *src;
		end_dest++;
		src++;
		n--;
	}
	/*Ensure the resulting string is null-terminated*/
	*end_dest = '\0';
	return (dest);
}
