#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated by a separator.
 * @separator: string used to separate numbers.
 * @n: number of integers.
 * @...: Integers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(var, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(var);
}
