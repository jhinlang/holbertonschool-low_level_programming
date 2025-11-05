#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - entry point to prints a string recursively
 * @s: is the string to print
 *
 * Return: the string
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}


