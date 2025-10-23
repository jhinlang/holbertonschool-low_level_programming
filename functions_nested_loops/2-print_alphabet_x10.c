#include "main.h"
/**
 * print_alphabet_x10 - create a program that print alphabet 10x
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
int i = 0;
char j = 'a';
	while (i <= 9)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
