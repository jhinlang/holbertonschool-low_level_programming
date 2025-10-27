#include "main.h"
/**
 * more_numbers - entry point to print 10 times numbers from 0 to 14
 *
 * Return: numbers from 0 to 14
 *
 */
void more_numbers(void);
{
	int j = 0;
	while (j < 4)
	{
		for (i = 0; i < 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
		j++;
	}
}
