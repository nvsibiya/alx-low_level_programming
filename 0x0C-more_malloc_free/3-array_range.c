#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value (included)
 * @max: The maximum value (included)
 *
 * Return: A pointer to the newly created array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min++;
	return (array);
}
