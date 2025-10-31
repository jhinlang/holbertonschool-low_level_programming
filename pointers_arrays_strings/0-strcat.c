#include <stdio.h>
#include "main.h"
/**
 * _strcat - entry point to concatener 2 strings
 * @src: is the string we want to concatene to dest
 * @dest: is the string destination
 *
 * Return: the concatenation
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] !='\0')
		i++;

	while (src[j] !='\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	
	return (dest);
}
