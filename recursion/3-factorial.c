#include "main.h"
#include <stdio.h>
/**
 * factorial - is the entry point to recursion
 * @n: is the int to recursive
 *
 * Return: the result
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
