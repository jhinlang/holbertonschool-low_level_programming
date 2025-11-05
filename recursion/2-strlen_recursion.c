#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - entry point to count the string's length recursively
 * @s: is the string to count
 *
 * Return: the length of string
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
