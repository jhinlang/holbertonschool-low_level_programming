#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sums of two diagonals in a matrix
 *
 * @a: is the matrix to exploide
 * @size: is the size of the matrix
 *
 * Return: the sums of the diagonals
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size +(size - 1 - i));
	}

	printf("%d, %d\n", sum1, sum2);
}
