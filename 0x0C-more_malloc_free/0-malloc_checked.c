#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         or exit with status 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *memo = malloc(b);

	if (memo == NULL)
	{
		exit(98);
	}
	return (memo);
}
