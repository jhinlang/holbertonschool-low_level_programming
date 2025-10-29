#include <stdio.h>
#include "main.h"
/**
 * _puts - entry point to prints a string followed by a new line, to stdout
 * @*str: is a pointer
 *
 * Return: the string followed by a new line
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

