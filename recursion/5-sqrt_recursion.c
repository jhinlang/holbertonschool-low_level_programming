#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - is the entry point to return the natural square root
 * @n: is the number to return square root
 *
 * Return: the square root of n
 *
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (_sqrt_recursion(n, x + 1));
}
