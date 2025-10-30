#include <stdio.h>
#include "main.h"
/**
 * _strcpy - entry point to copie the string pointed to by src
 * @src: is what we want to copy
 * @dest: is where we want to copy
 *
 * Return: the string copied
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *save = dest;

	while ((*dest++ = *src++) !='\0'=)
	;

	return save;
}
