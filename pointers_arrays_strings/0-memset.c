#include "main.h"
#include <stdio.h>
/**
 * _memset - entry point to copy an area memory
 * @s: is the pointer of destination
 * @b: is the text to copy
 * @n: is the bytes to copy
 *
 * Return: s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	 unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
