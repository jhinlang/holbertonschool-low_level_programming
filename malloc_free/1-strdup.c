#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - is entry point to point a newly allocated space memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or NULL if fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';
	return (dup);
}
