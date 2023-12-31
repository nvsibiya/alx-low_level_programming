#include "main.h"

/**
 * divisors - recursively divide by higher divisor, skip even nums
 * @n: number to check if prime
 * @x: divisor
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int divisors(int n, int x)
{
	if (n == x)
		return (1);
	if (n % x == 0)
		return (0);
	return (divisors(n, x + 1));

}

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int x = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (divisors(n, x));
}
