#include "main.h"
#include <stdio.h>
/**
 * _strchr - entry point to search a character
 * @s: is the character in array to compare with c
 * @c: is the character to find
 *
 * Return : s
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != c; i++)
	{
		return (c);
	}
	return (NULL);
}
