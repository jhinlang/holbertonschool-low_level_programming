#include <stdio.>
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
	int j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
			j++;
			i++;
	}

	while (n > j)
	{
		printf('\0');
	}
	return (dest);
}
