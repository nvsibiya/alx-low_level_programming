#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x;
	int y;
	int z;
	int a;
	int b = 0;
	int c;

	for (x = 0; n1[x]; x++)
		;
	for (y = 0; n2[y]; y++)
		;
	if (x > size_r || y > size_r)
		return (0);

	for (x -= 1, y -= 1, z = 0; z < size_r - 1; x--, y--, z++)
	{
		c = b;
		if (x >= 0)
			c += n1[x] - '0';
		if (y >= 0)
			c += n2[y] - '0';
		if (x < 0 && y < 0 && c == 0)
		{
			break;
		}
		b = c / 10;
		r[z] = c % 10 + '0';
	}
	r[z] = '\0';
	if (x >= 0 || y >= 0 || b)
		return (0);
	for (z -= 1, a = 0; a < z; z--, a++)
	{
		b = r[z];
		r[z] = r[a];
		r[a] = b;
	}
	return (r);

}
