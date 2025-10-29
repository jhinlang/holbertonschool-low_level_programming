#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - main entry to prints a string in reverse
 * _strlen - print length of string
 * @s: character to check
 *
 * Return: a string in reverse
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
void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
