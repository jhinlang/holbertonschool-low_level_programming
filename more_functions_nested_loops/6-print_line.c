#include "main.h"
/**
 * print_line - entry point to print a line in the terminal
 * @n: the number of times the line should be print
 *
 * Return: always __
 *
 */
void print_line(int n)
{
	int i = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		while ( i <= n)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}
