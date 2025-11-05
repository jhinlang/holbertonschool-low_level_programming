#include "main.h"
#include <stdio.h>
/**
 * _sqrt_help - is the entry point to return the natural square root
 * @n: is the number to return square root
 * @x: is the check value
 *
 * Return: the square root of n
 *
 */
int _sqrt_help(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (_sqrt_help(n, x + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to find the root square
 * 
 * Return: natural square root or -1  if no exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return(_sqrt_help(n,0));
}

