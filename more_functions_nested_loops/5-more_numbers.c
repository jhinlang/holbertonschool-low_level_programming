#include "main.h"
/**
 * more_numbers - entry point to print 10 times numbers from 0 to 14
 *
 * Return: numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			 if (i >= 10)
                _putchar('1');
				_putchar((i % 10) + '0');
        }
        _putchar('\n');
    }
}
