#include "variadic_functions.h"

/**
 * sum_them_all - Sum of integers.
 * @n: number of parameters in the sum.
 * @...: number of integers.
 *
 * Return: The sum of integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(var, int);
	}
	va_end(var);
	return (sum);
}
