#include "main.h"
/**
 * print_numbers - entry point to display numbers from 0 to 9 
 *
 * return : always 0 
 *
 */
void print_numbers(void)
{
int i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
