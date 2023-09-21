#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;

	while (x < y)
	{
		int temp = a[x];

		a[x] = a[y];
		a[y] = temp;
		x++;
		y--;
	}
}
