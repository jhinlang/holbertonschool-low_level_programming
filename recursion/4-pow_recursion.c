#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - is entry point to make pow recursively
 * @x: is a integer to pow with y
 * @y: is an integer to pow with x
 *
 * Return: the result of pow
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
