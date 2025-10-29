#include <stdio.h>
#include "main.h"
/**
 * puts2 - entry point to prints every character of a string
 *
 * @str:variables to compare and prints if are ok
 *
 * Return: str which are good
 *
 */
void puts2(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
			i++;
	}
		_putchar('\n');
}
