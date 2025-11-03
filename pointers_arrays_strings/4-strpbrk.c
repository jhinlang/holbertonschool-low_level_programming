#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - main entry to compare if charactere in s and accept are same
 * @s: is the charactere to check with accept
 * @accept: character to check with s
 *
 * Return: (s+i)
 *
 */
char *strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0, accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i );
	}
	return (NULL);
}
		
