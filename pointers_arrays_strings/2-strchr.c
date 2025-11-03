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
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		i++;
		}
		if (s[i] == c)
		{
			return (s + i);

		}
		i++;
	}
	return (NULL);
}
