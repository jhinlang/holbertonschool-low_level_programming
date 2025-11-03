#include "main.h"
#include <stdio.h>
/**
 * _strspn - entry point to returns bytes of s only if they are in accept too
 * @s: is the characters to check with accept
 * @accept: is the characters to check with s
 *
 * Return: numbers of common characters
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && s[i] != accept[j]; j++)
			;

		if (accept[j] == '\0')
			break;
	}
	return (i);
}
