#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - entry point to print recursively and in reverse a string
 * @s: is the string to print
 *
 * Return : the string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
