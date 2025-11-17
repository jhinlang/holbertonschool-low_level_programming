#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - entry point to prints a name
 *@name: name to be printed
 *@f: function pointer to print the name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}