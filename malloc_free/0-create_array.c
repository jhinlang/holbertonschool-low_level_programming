#include <stdio.h>
#include "main.h"
/**
 * create_array - create an array of char
 * @size: size of array
 * @c: is the specific char
 *
 * Return: an array of char
 *
 */
char *create_array(unsigned int size, charc)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
