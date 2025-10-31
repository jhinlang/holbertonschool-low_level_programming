#include <stdio.h>
#include "main.h"
/**
 * _strncat - entry point to concatene 2 strings in 1
 * @dest: is the destination
 * @src: is the source
 * @n: is the number of variables
 *
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}

