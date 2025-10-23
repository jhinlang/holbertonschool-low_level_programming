#include "main.h"
/**
 * print_sign _ entry point for check the sign of a number
 * @c: the character to check
 * Return: 1 + if is positive, 0, or -1 if negative
 *
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
		_putchar('+');
	else if (n < 0)
		_putchar('-');
		return (1);
	else
		return (0);
}
		
