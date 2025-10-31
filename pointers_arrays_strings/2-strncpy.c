#include <stdio.h>
#include "main.h"
/**
 * _strncpy - entry point to copy string
 * @dest: destination where we will copy string
 * @src: source where we take the string to copy
 * @n: is the number of character desired
 *
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}