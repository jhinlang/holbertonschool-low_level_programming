#include "main.h"
/**
 * print_square - entry point to draw a square
 *
 * Return : nothing
 *
 */
void print_square(int size)
{	
	int j;
	int i;
	int size = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
}
