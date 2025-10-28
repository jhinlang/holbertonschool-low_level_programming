#include <stdio.h>
#include "main.h"
/*
 * swap_int - entry point to swaps the values of two integers
 * @a: value to swap with b
 * @b: value to swap with a
 *
 * Return: the values swapped
 *
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
