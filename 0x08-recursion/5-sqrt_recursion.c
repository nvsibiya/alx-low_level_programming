#include "main.h"

/**
 * find_sqrt - function that performs the actual square root calculation
 * @n: int to return
 * @x: int to return
 * Return: int
 */

int find_sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	} else if (x * x > n)
	{
		return (-1);
	}
	return (find_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int to return
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}
