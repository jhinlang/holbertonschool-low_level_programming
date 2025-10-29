#include <stdio.h>
#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: is the variable to print the half
 *
 * Return: the half of the string
 */
void puts_half(char *str)
{
	int i, j, k;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 0)
	{
		k = j /2;
		for (i = k; i < j; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
