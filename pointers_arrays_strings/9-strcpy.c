#include <stdio.h>
#include "main."
/**
 * _strcpy - entry point to copie the string pointed to by src
 * @src: is what we want to copy
 * @dest: is where we want to copy
 *
 * Return: the string copied
 *
 */
char *strcpy(char *dest, char *src)
{
	strcopy(dest, src);
	printf("%s", dest);
	return (0);
}
