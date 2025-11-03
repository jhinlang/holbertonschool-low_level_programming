#include "main.h"
#include <stdio.h>
/**
 * _memcpy - entry point to copy n bytes of memory area
 * @dest: is where we want to copy the memory
 * @src: is the memory we want to copy
 * @n: is the bytes we want to copy
 *
 * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
