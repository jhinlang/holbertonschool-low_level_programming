#include "main.h"
/**
 * times_table - entry point to prints the 9 times table
 *
 * Return: the numbers asked
 *
 */
void times_table(void)
{
int i = 0;

while ( i < 10)
{
	_putchar(i);
	_putchar(',');
	_putchar(' ');
	i++;
}	

