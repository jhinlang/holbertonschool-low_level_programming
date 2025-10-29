#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - entry to print the length of string
 * @s: is the checker variable
 * 
 * Return: the length of a string
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (len);
}

/**
 * print_rev - main entry to prints a string in reverse
 * @s: character to check
 *
 * Return: a string in reverse
 */
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
