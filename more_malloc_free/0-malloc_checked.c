#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @ptr: pointer to allocate memory
 * Return: pointer to allocated memory
 */
void malloc_checked(void *ptr)
{
	ptr = malloc(sizeof(ptr));
	if (ptr == NULL)
		exit(98);
		
	return (ptr);
}